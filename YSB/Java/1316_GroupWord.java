import java.util.HashSet;
import java.util.Scanner;

public class GroupWord {
	public static void main(String[] args) {
		int count = 0; // 그룹단어의 갯수
		Scanner stdIn = new Scanner(System.in);
		int n = stdIn.nextInt();

		String[] strArr = new String[n];
		for (int i = 0; i < n; i++) {
			strArr[i] = stdIn.next();
		}

		/*
		 * for(int i = 0; i<n; i++) {
		 *
		 * System.out.println(strArr[i]); }
		 */

		for (int i = 0; i < n; i++) {

			char[] charArr = strArr[i].toCharArray();
			HashSet<Character> set = new HashSet<Character>();

			if (charArr.length == 1) {
				count++;
			} else {
				set.add(charArr[0]);
				for (int j = 0; j < charArr.length - 1; j++) {
					// 연속된 같은 요소 중 맨 앞 요소만 set에 넣음

					if (charArr[j] == charArr[j + 1]) {
						// 현재 요소와 다음 요소가 같으면 패스
						if (j == charArr.length - 2) {
							count++;
						}

					} else {
						// 현재 요소와 다음 요소가 다르면
						if (!set.add(charArr[j + 1])) {
							// 이미 셋에 들어가 있다면 그룹단어가 아님!
							break;
						} else {
							if (j == charArr.length - 2) {
								count++;
							}
						}
					}
				}
			}
		}

		System.out.println(count);
	}
}