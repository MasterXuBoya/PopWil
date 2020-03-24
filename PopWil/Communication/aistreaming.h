#ifndef AISTREAMING_H
#define AISTREAMING_H

#include <QObject>
#include "constvar.h"
#include "bdaqctrl.h"

extern double g_Acc;
class AiStreaming
{
public:
    AiStreaming();
    ~AiStreaming();
    void setStreamingAiPara(ConfigureParameterAI t);
    void configure();
    void start();
    void stop();
    double getAcc();

    static void BDAQCALL OnDataReadyEvent(void * sender, BfdAiEventArgs * args, void * userParam);
    static void BDAQCALL OnOverRunEvent(void * sender, BfdAiEventArgs * args, void * userParam);
    static void BDAQCALL OnCacheOverflowEvent(void * sender, BfdAiEventArgs * args, void * userParam);
    static void BDAQCALL OnStoppedEvent(void * sender, BfdAiEventArgs * args, void * userParam);
private:
    double scaledData[5000];

    WaveformAiCtrl *waveformAiCtrl;
    ConfigureParameterAI para;
};

#endif // AISTREAMING_H

