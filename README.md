# pclubsecy-task6
There is a necklace with various precious beads on it each valued at a different price.   
At a sealed bid auction, various interested buyers bid the exact price they are willing to pay for the whole or for parts of the necklace.   

Normally one would simply remove the precious beads and make new necklaces as per the needs of the buyer. But this necklace is a very old one and if you try removing the beads you will damage them.  

This means that you can cut the necklace and sell it in parts but a buyer will buy only one part (they will not accept if you give them 2 seperate pieces)  

You are given the price of each precious bead on the necklace in the order it is placed.  

Your task is to check from the various bids which you have got in the auction and see if you can cut your necklace in such a way that the value of the cut piece is the same as that of the bid.  

Input:  
line 1: One integer denoting length of the necklace (len)  
line 2: Value of each bead in the necklace in that particular order. (Xi)  
line 3: number of bids received (b)  
next b lines will be the value of each bid  

Output:  
b lines with output '1' if you can cut the necklace to match the bid price, and '0' if there is no way to cut the necklace such that the piece value matches the bid price
  
Constraints:  
20% marks for len<=10  
100% marks for len<=1000  (can be changed but for now to generate solutions I have kept it as 1000)  
Execution time: 1sec (can be changed)  
  
Sample Input:  
8  
8 2 34 32 9 1 1 2  
3  
68  
419  
3  

Sample output:  
1  
0  
1
