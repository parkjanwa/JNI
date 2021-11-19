package JNI;

public class HelloWorld {
	
	static {
		System.loadLibrary("CallCSharp");
	}
	
	public static native void one();
	public static native void two();

	public static void main(String[] args) {
		System.out.println("JAVA : Success");
		one();
		two();
	}
}
