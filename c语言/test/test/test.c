
while (root || !StackEmpty(&st))
{
	while (root){
		StackPush(&st, root);
		root = root->left;
	}
	int idx = 0;
	root = StackTop(&st);
	arr[idx++] = root->val;
	StackPop(&st);
	root=root->right£»
}


void insert(int* arr, int n)
{
	//Î´²åÈëÊı¾İ[1,n)
	for(int i = 1; i < n; ++i){
		int end = i - 1;
		int data = arr[i];
		while (end >= 0 && arr[end] >= data){
			arr[end + 1] = arr[end];
			--end;
		}
	}
}

void selectSort(int* arr, int n){
	for (int i = 0; i < n; i++){
		if (arr[i] < arr[i + 1]){
			
		}
	}
}