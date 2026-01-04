// class Solution {
// public:
//     int countStudents(vector<int>& students, vector<int>& sandwiches) {
//         // Compare students.front() with sandwiches.top()
//         // If same → pop both
//         // Else → move student to back
//         // Stop when you rotate everyone and nobody eats
//         int count[2] = {0,0} ; 
//         for (int s : students) {
//             count[s]++;
//         }

//         for (int i = 0; i < sandwiches.size(); i++) {

//             if (count[sandwiches[i]] == 0) {
//                 break;
//             }

//             count[sandwiches[i]]--;
//         }

//         return count[0] + count[1] ;
//     }
// };
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for (int s : students) q.push(s);

        int i = 0;          // index for sandwiches (top)
        int rotations = 0;  // count of failed matches

        while (!q.empty() && rotations < q.size()) {
            if (q.front() == sandwiches[i]) {
                q.pop();        // student eats
                i++;            // next sandwich
                rotations = 0;  // reset because someone ate
            } else {
                q.push(q.front()); // move student to back
                q.pop();
                rotations++;
            }
        }

        return q.size(); // students unable to eat
    }
};
