// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "rec_Recorder.h"
#include <thread>
#include <string>

void counter();
void showC();

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

int count;
bool c;
std::thread t;

JNIEXPORT void JNICALL Java_rec_Recorder_load(JNIEnv *env, jobject obj) {
    count = 0;
    c = true;
    t = std::thread(counter);
}

JNIEXPORT void JNICALL Java_rec_Recorder_get(JNIEnv* env, jobject obj) {
    //showC();
    jclass cls = env->GetObjectClass(obj);
    jfieldID id = env->GetFieldID(cls, "count", "I");
    env->SetIntField(obj, id, count);
}

JNIEXPORT void JNICALL Java_rec_Recorder_unload(JNIEnv* env, jobject obj)
{
    c = false;
}

void showC()
{
    if (c)
        MessageBox(NULL, L"True", L"wut", 0);
    else
        MessageBox(NULL, L"False", L"wut", 0);
}


void counter()
{
    while (c)
    {
        //MessageBox(NULL, L"True", L"wut", 0);
        count++;
    }
}
