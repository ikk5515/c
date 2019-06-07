#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct Que {
	int item[50];
	int size, r, f;

	void create(int x) {
		size = x;
		r = 0;
		f = 0;
	}
	bool isEmpty() {
		if (r - f == 0) {
			return true;
		}
		else return false;
	}

	void put(int x) {
		if (size <= r) {
			printf("overflow\n");
		}
		else {
			item[r++] = x;
			printf("큐에 %d를 삽입함\n", item[r - 1]);
		}
	}

	void get() {
		if(isEmpty()){
		printf("underflow\n");
	}
	else {
	printf("맨 앞의 값%d을 삭제함", item[f]);
	item[f] = 0;
	f++;
	}
	}

	int front() {
		if(isEmpty()) {
			printf("Empty!!(null)\n");
			return -1;
		}
		return item[f];
	}
};

	int main() {
		int a, b, n, m;
		Que q;
		scanf("%d %d", &n, &m);
		q.create(n);
		for (int i = 0; i < m; i++) {
			scanf("%d", &a);
			if (a == 1) {
				scanf("%d", &b);
				q.put(b);
			}
			else if (a == 2) {
				q.get();
				}
			else {
				if (q.front() != -1)
					printf("맨 앞의 값 : %d\n", q.front());
				else printf("null\n");
		}
	}
	return 0;
}