using System;

namespace ConsoleApp
{
    class intArray
    {
        int[] IntArray;
        public int n
        {
            get;
            private set;
        }
            public int scalar
        {
            private get { return scalar; }
            set
            {
                for (int i = 0; i < IntArray.Length; i++)
                {
                    IntArray[i] *= value;
                }
            }
        }
            public intArray(int N)
            {
                n = N;
                IntArray = new int[n];
            }
            public void readArray()
            {
                Console.WriteLine("Введите элементы:");
                for (int i = 0; i < IntArray.Length; i++)
                {
                    Console.Write("intArray[{0}] = ", i); IntArray[i] = Convert.ToInt32(Console.ReadLine());
                }
            }
            public void printArray()
            {
                Console.WriteLine("Вывод элементов:");
                for (int i = 0; i < IntArray.Length; i++)
                {
                    Console.WriteLine("IntArray[{0}] = {1}; ", i, IntArray[i]);
                }
            }
    }
    class Program
    {
        static void Main(string[] args)
        {
            intArray arr = new intArray(3);
            arr.readArray();
            arr.printArray();
            arr.scalar = 2;
            Console.WriteLine(arr.n);
            arr.printArray();
            Console.ReadKey();

        }
    }
}