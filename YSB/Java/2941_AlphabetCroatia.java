import java.util.Scanner;

public class AlphabetCroatia {
	
	public static int check(int i, char[] chars) {
		//c인 경우 - =
		//		 \ -
		//d인 경우 - z - = --> i+=2
		//		 \ -
		//l인 경우 - j
		//n인 경우 - j
		//s인 경우 - =
		//z인 경우 - =
		char alph = chars[i];
		if(i + 1 >= chars.length) {
			return 0;
		}else if(i + 2 >= chars.length) {
			if(alph == 'c' && chars[i+1] == '=' || chars[i+1] == '-') {
				return 1;
			}else if(alph == 'd' && chars[i+1] == '-') {
				return 1;
			}else if(alph == 'l' && chars[i+1]=='j') {
				return 1;
			}else if(alph == 'n' && chars[i+1] == 'j') {
				return 1;
			}else if(alph == 's' && chars[i+1] == '=') {
				return 1;
			}else if(alph == 'z' && chars[i+1] == '=') {
				return 1;
			}else {
				return 0;
			}	
		}
		
		
		
		if(alph == 'c' && chars[i+1] == '=' || chars[i+1] == '-') {
			return 1;
		}else if(alph == 'd') {
			if(chars[i+1] == 'z' && chars[i+2] == '=') {
				return 2;
			}else if(chars[i+1] == '-') {
				return 1;
			}else {
				return 0;
			}
		}else if(alph == 'l' && chars[i+1]=='j') {
			return 1;
		}else if(alph == 'n' && chars[i+1] == 'j') {
			return 1;
		}else if(alph == 's' && chars[i+1] == '=') {
			return 1;
		}else if(alph == 'z' && chars[i+1] == '=') {
			return 1;
		}else {
			return 0;
		}
	}
	
	public static void main(String[] args) {
		Scanner stdIn = new Scanner(System.in);
		String str = stdIn.next();
		
		int count = 0;
		
		char[] chars = str.toCharArray();
		for(int i = 0; i< chars.length; i++) {
			//System.out.println("단어의 첫글자 : " + chars[i]);
			int flag= check(i, chars);
			count++; //체크 끝나면 카운트 ++;
			
			if(flag == 1) {
				i+=1; //한칸 건너뛰기
				
				
			}else if(flag == 2){ 
				i+=2; // 두칸 뛰기
				
				
			}
			
		
		}
		
		System.out.println(count);
	}
}
