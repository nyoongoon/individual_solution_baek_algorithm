import java.util.Scanner;

public class 2941_AlphabetCroatia_best {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		String arr[] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

		String s = sc.nextLine();

		for (int i = 0; i < arr.length; i++) {
			if(s.contains(arr[i]))	//문자열에서 특정 문자열이 포함되어 있는지 확인
				s = s.replace(arr[i], "!"); // 특정 문자열을 모두 대체하여 덮어쓰기
		}
		System.out.println(s.length());
	}
}
