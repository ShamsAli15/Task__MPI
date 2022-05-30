#include <mpi.h>
#include <stdio.h>
#include <iostream>
using namespace std;


//int main() {
//
//
//
//	MPI_Init(NULL, NULL);
//
//	int size_of_matrix[64];
//	int rank, size;
//	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
//	MPI_Comm_size(MPI_COMM_WORLD, &size);
//
//	// 1,8 * 8,8 = 1,8
//	int Localvar[1][8] = { { 1 , 2 , 3, 4, 1, 2 ,3 ,4} };
//	int LocalRecv[1][8] = { 0,0,0,0,0,0,0,0 };
//	int Transpose_matrix[8][1];
//
//	int vector[1][8] = { { 1 , 2, 3, 4, 1, 2, 3, 4} };
//
//	int matrix_2D[8][8] = { { 1 , 2 , 3, 4, 1, 2 ,3 ,4},
//							{ 1 , 2 , 3, 4, 1, 2 ,3 ,4},
//							{ 1 , 2 , 3, 4, 1, 2 ,3 ,4},
//							{ 1 , 2 , 3, 4, 1, 2 ,3 ,4},
//							{ 1 , 2 , 3, 4, 1, 2 ,3 ,4},
//							{ 1 , 2 , 3, 4, 1, 2 ,3 ,4},
//							{ 1 , 2 , 3, 4, 1, 2 ,3 ,4},
//							{ 1 , 2 , 3, 4, 1, 2 ,3 ,4} };
//	/*MPI_Scatter(size_of_matrix, 64/size, MPI_INT, , 64 / size, MPI_INT, 0, MPI_COMM_WORLD);*/
//
//	int mult[8] = { 0, 0, 0, 0, 0, 0 ,0 ,0 };
//	int res = 0;
//	int index = 0;
//	int tempMat[64];
//	int Localvar_[8] = { 1 , 2 , 3, 4, 1, 2 ,3 ,4 };
//
//
//
//	for (int i = 0; i < 8; i++) {
//		for (int j = 0; j < 8; j++) {
//			index = i * 8 + j;
//			tempMat[index] = matrix_2D[j][i];
//		}
//	}
//		MPI_Scatter(tempMat, 8, MPI_INT, mult, 8, MPI_INT, 0, MPI_COMM_WORLD);
//
//		if (rank <= 7)
//		{
//			for (int i = 0; i < 8; ++i)
//			{
//				res+= tempMat[i] * Localvar_[i];
//
//
//			}
//
//		}
//
//		MPI_Gather(&res, 1, MPI_INT, &LocalRecv, 1, MPI_INT, 0, MPI_COMM_WORLD);
//
//		if (rank == 0)
//
//			printf("Result of vector * matrix = %d , %d, %d", LocalRecv[0], LocalRecv[1], LocalRecv[2], LocalRecv[3], LocalRecv[4], LocalRecv[5], LocalRecv[6], LocalRecv[7]);
//		
//
//	
//
//	MPI_Finalize();
//}
	//MPI_Scatter(tempMat, 8, MPI_INT, mult, 8, MPI_INT, 0, MPI_COMM_WORLD);
	//if (rank <= 7)
	//{
	//	for (int i = 0; i < 1; ++i)
	//	{
	//		for (int j = 0; j < 8; ++j)
	//		{
	//			for (int k = 0; k < 8; ++k)
	//			{
	//				index = i * 8 + j;
	//				tempMat[index] = matrix_2D[j][k];
	//				mult[i][j] += tempMat[index] * Localvar[k][j];
	//				/*mult[i][j] += Localvar[i][k] * matrix_2D[k][j];*/
	//			}
	//		}
	//	}

	//}
	
	//MPI_Gather(&mult, 1, MPI_INT, &LocalRecv, 1, MPI_INT, 0, MPI_COMM_WORLD);

	//if (rank == 0)

	//	//printf("Result of vector * matrix = %d , %d, %d", LocalRecv[0], LocalRecv[1], LocalRecv[2], LocalRecv[3], LocalRecv[4], LocalRecv[5], LocalRecv[6], LocalRecv[7]);
	//{
	//	for (int i = 0; i < 1; i++)
	//	{
	//		for (int j = 0; j < 8; j++)
	//			cout << LocalRecv[i][j] << " ";
	//		cout << endl;
	//	}

	//}
	
	//
	//for (int i = 0; i < 1; ++i) {
	//	for (int j = 0; j < 8; ++j) {
	//		Transpose_matrix[j][i] = Localvar[i][j];
	//	}
	//}

	//// 1*8 * 8*1=1
	//for (int i = 0; i < 1; ++i)
	//{
	//	for (int j = 0; j < 1; ++j)
	//	{
	//		for (int k = 0; k < 8; ++k)
	//		{
	//			res += mult[i][k] * Transpose_matrix[k][j];
	//		}
	//	}
	//}


	/*cout << res;*/




int main() {



	MPI_Init(NULL, NULL);

	int size_of_matrix[64];
	int Result = 0;
	int rank, size;
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	MPI_Comm_size(MPI_COMM_WORLD, &size);
	int mult[1][8] = { { 0, 0, 0, 0, 0, 0 ,0 ,0} };
	int Matrix_1D[1][8] = { { 1 , 1 , 1, 1, 1, 1 ,1 ,1} };
	int Transpose_Matrix_1D[8][1];
	int matrix_2D[8][8] = 
	{ { 1 , 1 , 1, 1, 1, 1 ,1 ,1},
	  { 1 , 1 , 1, 1, 1, 1 ,1 ,1},
	  { 1 , 1 , 1, 1, 1, 1 ,1 ,1},
	  { 1 , 1 , 1, 1, 1, 1 ,1 ,1},
	  { 1 , 1 , 1, 1, 1, 1 ,1 ,1},
	  { 1 , 1 , 1, 1, 1, 1 ,1 ,1},
	  { 1 , 1 , 1, 1, 1, 1 ,1 ,1},
	  { 1 , 1 , 1, 1, 1, 1 ,1 ,1}
	};
	
	/*MPI_Scatter(size_of_matrix, 64 / size, MPI_INT, , 64 / size, MPI_INT, 0, MPI_COMM_WORLD);*/
	/*MPI_Gather(&mult, 1, MPI_INT, &LocalRecv, 1, MPI_INT, 0, MPI_COMM_WORLD);*/
	
	// multiply Matrix_1D with Matrix_2D
	for (int i = 0; i < 1; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			for (int k = 0; k < 8; ++k)
			{              // Matrix 1D [1][8] * Matrix_1D [8][8]
				mult[i][j] += Matrix_1D[i][k] * matrix_2D[k][j];
			}
		}
	}
	// print result of Mult
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 8; j++)
			cout << mult[i][j] << " ";
		cout << endl;
	}
	// Make Transpose for matrix 1D
	for (int i = 0; i < 1; ++i) {
		for (int j = 0; j < 8; ++j) {
			Transpose_Matrix_1D[j][i] = Matrix_1D[i][j];
		}
	}

	// 1*8 * 8*1=1
	for (int i = 0; i < 1; ++i)
	{
		for (int j = 0; j < 1; ++j)
		{
			for (int k = 0; k < 8; ++k)
			{
				Result += mult[i][k] * Transpose_Matrix_1D[k][j];
			}
		}
	}
	MPI_Finalize();
	cout << Result;

}