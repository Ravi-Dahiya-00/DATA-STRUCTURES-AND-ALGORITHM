class Solution {
public:
    /**
     * Generates a complete row of Pascal's Triangle
     * @param rowIndex: The row number (0-indexed)
     * @return: Complete row of Pascal's Triangle
     * 
     * Uses the formula: nCr = nC(r-1) × (n-r+1)/r
     */
    vector<int> getRow(int rowIndex) {
        vector<int> row;
        long long val = 1;  // First element is always 1
        
        row.push_back(1);   // Add nC0 = 1
        
        /**
         * Generate remaining elements nC1, nC2, ..., nCn
         * For rowIndex = 4: generates 4C1, 4C2, 4C3, 4C4
         * 
         * Formula: next_val = prev_val × (n - k + 1) / k
         * where k is the current position (1 to n)
         */
        for(int k = 1; k <= rowIndex; k++) {
            // Example for row 4:
            // k=1: val = 1 × (4-1+1)/1 = 1 × 4/1 = 4    (4C1)
            // k=2: val = 4 × (4-2+1)/2 = 4 × 3/2 = 6    (4C2)
            // k=3: val = 6 × (4-3+1)/3 = 6 × 2/3 = 4    (4C3)
            // k=4: val = 4 × (4-4+1)/4 = 4 × 1/4 = 1    (4C4)
            val = val * (rowIndex - k + 1);
            val = val / k;
            row.push_back(val);
        }
        
        return row;
    }
    
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        
        for(int i = 0; i < numRows; i++) {
            triangle.push_back(getRow(i));
        }
        
        return triangle;
    }
};