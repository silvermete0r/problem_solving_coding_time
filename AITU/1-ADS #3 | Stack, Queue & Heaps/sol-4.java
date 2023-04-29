class Solution {
    public boolean isValid(String s) {
        Stack<Character> stack = new Stack<>();
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (stack.isEmpty()) {
                stack.push(c);
            } else if (stack.peek() == '(' && c == ')') {
                stack.pop();
            } else if (stack.peek() == '[' && c == ']') {
                stack.pop();
            } else if (stack.peek() == '{' && c == '}') {
                stack.pop();
            } else {
                stack.push(c);
            }
        }
        return stack.isEmpty();
    }
}