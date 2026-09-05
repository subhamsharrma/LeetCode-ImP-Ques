class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if (head == nullptr) return nullptr;
        if (head->next == nullptr) return new TreeNode(head->val);
        
        ListNode* slow = head, *cast = head, *slow_prev = nullptr;
        
        // Find the middle element (slow pointer)
        while (cast != nullptr && cast->next != nullptr) {
            slow_prev = slow;
            slow = slow->next;
            cast = cast->next->next;
        }
        
        // Create root node from the middle element
        TreeNode* root = new TreeNode(slow->val);
        
        // Disconnect the left half from the middle
        slow_prev->next = nullptr;
        
        // Recursively construct left and right subtrees
        root->left = sortedListToBST(head);
        root->right = sortedListToBST(slow->next);
        
        return root;
    }
};