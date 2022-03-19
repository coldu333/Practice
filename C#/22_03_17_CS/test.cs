using System;

public class Solution 
{
    public int[] solution(int[] array, int[,] commands) 
    {
        int[] answer = new int[commands.GetLength(0)];
        int[] temp;
        //1. 자르기
        for(int i=0; i<commands.GetLength(0); i++)
        {
            int length = commands[i,1] - commands[i,0] + 1;
            temp = new int[length];
            
            for(int j = 0; j < length; j++)
            {
                temp[j] = array[commands[i,0]-1+j];
            }
            //2. 정렬하기
            Sort(temp);
            
            //3. 정답 저장하기
            answer[i] = temp[commands[i, 2]-1];
         }
        return answer;
    }
    
    void Sort(int[] array)
    {
        int tempNum = 0;
        for(int i = 0; i < array.Length; i++)
            for(int j = i; j < array.Length; j++)
                if(array[i] > array[j])
                    {
                        tempNum = array[i];
                        array[i] = array[j];
                        array[j] = tempNum;
                    }
    }
    
}