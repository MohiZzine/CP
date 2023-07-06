#include <bits/stdc++.h>;
#include <type_traits>

using namespace std;



int main() {
	class Stack {
		private:
			vector<int> stack;
			int stack_size;
		public:
			Stack(vector<int> s = {}, int size = 0) {
				stack = s;
				stack_size = size;
			}
		int get_stack_size() {
			return stack_size;
		}
		
		void push(int element) {
			stack.push_back(element);
			stack_size++;
		}
		
		void pop() {
			if (stack_size > 0) {
			stack.pop_back();		
			stack_size--;
			} 
		}
		
		int get_top_element() {
			return *(stack.rbegin());
		}
			
	};
	
	vector<int> vect_stack{4, 3, 4, 2};
	
	Stack s = Stack(vect_stack, 4);
	
	printf("The size of the stack is %d\n", s.get_stack_size());
	printf("The top of the stack is element x = %d", s.get_top_element());
	return 0;
}