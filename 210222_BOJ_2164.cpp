#include <iostream>
#include <deque>

using namespace std;

int main() {

	deque<int> dq;
	int N; cin >> N;
	for (int i = 1; i <= N; ++i)
		dq.push_back(i);

	while (dq.size() > 1) {

		dq.pop_front();

		if (dq.size() == 1)
			break;

		int card = dq.front();
		dq.pop_front();
		dq.push_back(card);

	}

	cout << dq[0] << "\n";

	return 0;
}