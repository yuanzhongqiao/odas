#ifndef __ODAS_SYSTEM_FRAME2HOP
#define __ODAS_SYSTEM_FRAME2HOP

   /**
    * \file     frame2hop.h
    * \author   François Grondin <francois.grondin2@usherbrooke.ca>
    * \version  2.0
    * \date     2018-03-18
    * \copyright
    *
    * Permission is hereby granted, free of charge, to any person obtaining
    * a copy of this software and associated documentation files (the
    * "Software"), to deal in the Software without restriction, including
    * without limitation the rights to use, copy, modify, merge, publish,
    * distribute, sublicense, and/or sell copies of the Software, and to
    * permit persons to whom the Software is furnished to do so, subject to
    * the following conditions:
    *
    * The above copyright notice and this permission notice shall be
    * included in all copies or substantial portions of the Software.
    *
    * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
    * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
    * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
    * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
    *
    */

    #include <stdlib.h>
    #include <string.h>

    #include <signal/hop.h>
    #include <signal/frame.h>

    typedef struct frame2hop_obj {

        unsigned int hopSize;
        unsigned int frameSize;
        unsigned int nSignals;

        float ** array;

    } frame2hop_obj;

    frame2hop_obj * frame2hop_construct_zero(const unsigned int hopSize, const unsigned int frameSize, const unsigned int nSignals);

    void frame2hop_destroy(frame2hop_obj * obj);

    void frame2hop_process(frame2hop_obj * obj, const frames_obj * frames, hops_obj * hops);

#endif
