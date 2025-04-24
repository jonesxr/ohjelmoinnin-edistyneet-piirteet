#pragma once

class Paivays {
private:
	int paiva;
	int kuukausi;
	int vuosi;



public:
	//parametrit�n
	Paivays();
	//parametrillinen
	Paivays(int p, int k, int v);

	~Paivays();

	void setPaiva(int p);

	void setKuukausi(int k);

	void setVuosi(int v);

	int getPaiva();

	int getKuukausi();

	int getVuosi();

	void tulostaPaivays();

	//lis�tty t3  
	void pvmKysyminen();
	void plusyksipaiva();


};
#pragma once
