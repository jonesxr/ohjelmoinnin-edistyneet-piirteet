#pragma once

class Paivays {
private:
	int paiva;
	int kuukausi;
	int vuosi;



public:
	    Paivays();

	    void setPaiva(int p);

		void setKuukausi(int k);

		void setVuosi(int v);

		int getPaiva();

		int getKuukausi();

		int getVuosi();

		void tulostaPaivays();

		//lisätty t3  
		void pvmKysyminen();
		void plusyksipaiva();
		

};
