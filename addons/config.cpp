class CfgPatches
{
class water
{
	units[] = {"Altis"};
	weapons[] = {};
	requiredVersion = 0.1;
	requiredAddons[] = {"A3_Map_Altis"};
};
};

class CfgWorlds {
    class CAWorld;	// External class reference

    class Stratis : CAWorld {
        description = "Agios Efstratios";

        class Sea {
            MaxTide = 230; // 0
            MaxWave = 230.25;
        };
        class RainParticle {
			dropColor[] = {0.1, 0.1, 0.1, 0.15};
			dropHeight = 0.8;
			dropSpeed = 25;
			dropWidth = 0.02;
			effectRadius = 15;
			lumSunBack = 0.1;
			lumSunFront = 0.1;
			minRainDensity = 0.01;
			rainDropTexture = "a3\data_f\rainnormal_ca.paa";
			refractCoef = 0.5;
			refractSaturation = 0.3;
			rndDir = 0.02;
			rndSpeed = 0.2;
			texDropCount = 10;
			windCoef = 0.05;
		};
    };

    class Altis : CAWorld {

        description = "Lemnos"; // Altis

        class Sea {
            MaxTide = 230; // 0
            MaxWave = 230.25;
        };

		class RainParticle {
			dropColor[] = {0.1, 0.1, 0.1, 0.15};
			dropHeight = 0.8;
			dropSpeed = 25;
			dropWidth = 0.02;
			effectRadius = 15;
			lumSunBack = 0.1;
			lumSunFront = 0.1;
			minRainDensity = 0.01;
			rainDropTexture = "a3\data_f\rainnormal_ca.paa";
			refractCoef = 0.5;
			refractSaturation = 0.3;
			rndDir = 0.02;
			rndSpeed = 0.2;
			texDropCount = 10;
			windCoef = 0.05;
		};
    };
};
