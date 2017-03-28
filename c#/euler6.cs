using System;

namespace euler
{
    class Program
    {

        static void Main(string[] args)
        {
            Console.WriteLine(sqOfSum(100) - sumOfSq(100));
            Console.ReadKey();
        }

        static int sumOfSq(int num)
        {
            int ss = 0;
            for (int i = 1; i <= num; i++)
            {
                ss += i * i;
            }
            return ss;
        }

        static int sqOfSum(int num)
        {
            int ss = 0;
            for (int i = 0; i <= num; i++)
            {
                ss += i;
            }
            return ss * ss;
        }
    }
}
