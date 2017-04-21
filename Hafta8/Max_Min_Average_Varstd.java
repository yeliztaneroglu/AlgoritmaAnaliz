package proje001;

import java.util.ArrayList;
import java.util.Random;

public class MainClass {
	
	ArrayList<Integer> liste = new ArrayList<>();
	
	
	MainClass(){
		Random random = new Random();
		for(int i=0; i<100; i++){
			liste.add(random.nextInt(500));
		}
		
		System.out.println(liste);
	}
	
	public int minList(){
		int min = liste.get(0);
		for(int i=0; i<liste.size(); i++){
			if(min>liste.get(i)) min=liste.get(i);
		}
		return min;
	}
	public int maxList(){
		int max = liste.get(0);
		for(int i=0; i<liste.size(); i++){
			if(max<liste.get(i)) max=liste.get(i);
		}
		return max;
	}
	
	public double getAverage(){
		double average=0.0;
		
		for(int i=0; i<liste.size(); i++){
			average=average+liste.get(i);
		}
		
		average=average/liste.size();
		
		return average;
	}
		
	public double varyans(){
		double std=0;
		double average=getAverage();
		for(int i=0; i<liste.size();i++){
			std=std+Math.pow(liste.get(i)-average, 2);
		}
		
		
		return std/liste.size();
	}
	
	public double standartSapma(){
		return Math.sqrt(varyans());
	}
	
	public ArrayList<Double> normalDagilim(){
		ArrayList<Double> nm = new ArrayList<>();
		double varyans = varyans();
		double average = getAverage();
		for(int i=0; i<liste.size(); i++){
		 nm.add(1/varyans*Math.sqrt(2*Math.PI)*(Math.pow(Math.E, (-1)*(Math.pow(liste.get(i)-average, 2)/(2*varyans*varyans)))));
		}
		return nm;
	}
		
	
   public static void main(String[] args) {
	  MainClass m = new MainClass();
	  System.out.println(m.maxList());
	  System.out.println(m.minList());
	  System.out.println(m.varyans());
	  System.out.println(m.standartSapma());
	  System.out.println(m.normalDagilim());
	  
	  /* tum fonksiyonlar O(n) */
}
}
