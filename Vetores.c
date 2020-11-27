{\rtf1\ansi\ansicpg1252\cocoartf1671\cocoasubrtf600
{\fonttbl\f0\fmodern\fcharset0 Courier;}
{\colortbl;\red255\green255\blue255;\red173\green169\blue32;\red32\green32\blue32;\red88\green118\blue71;
\red191\green100\blue38;\red254\green187\blue91;\red153\green168\blue186;\red86\green132\blue173;}
{\*\expandedcolortbl;;\csgenericrgb\c67843\c66275\c12549;\csgenericrgb\c12549\c12549\c12549;\csgenericrgb\c34510\c46275\c27843;
\csgenericrgb\c74902\c39216\c14902;\csgenericrgb\c99608\c73333\c35686;\csgenericrgb\c60000\c65882\c72941;\csgenericrgb\c33725\c51765\c67843;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx560\tx1120\tx1680\tx2240\tx2800\tx3360\tx3920\tx4480\tx5040\tx5600\tx6160\tx6720\pardirnatural\partightenfactor0

\f0\fs26 \cf2 \cb3 #include \cf4 <stdio.h>\
\
\cf5 int \cf6 main\cf7 () \{\
    \cf5 int \cf7 vetor_A[\cf8 10\cf7 ]\cf5 , \cf7 vetor_B[\cf8 10\cf7 ]\cf5 , \cf7 vetor_C[\cf8 10\cf7 ]\cf5 , \cf7 numero\cf5 , \cf7 fim = \cf8 10\cf5 , \cf7 soma_acumulada = \cf8 0\cf5 ;\
    for\cf7 (\cf5 int \cf7 i = \cf8 1\cf5 ; \cf7 i <= \cf8 20\cf5 ; \cf7 i++ )\{\
        \cf5 if \cf7 (i < \cf8 11\cf7 )\{\
            scanf(\cf4 "%d"\cf5 ,\cf7 &numero)\cf5 ;\
            \cf7 vetor_A[i-\cf8 1\cf7 ] = numero\cf5 ;\
        \cf7 \} \cf5 else \cf7 \{\
            scanf(\cf4 "%d"\cf5 ,\cf7 &numero)\cf5 ;\
            \cf7 vetor_B[i - \cf8 11\cf7 ] = numero\cf5 ;\
        \cf7 \}\
    \}\
\
    \cf5 for\cf7 (\cf5 int \cf7 i = \cf8 1\cf5 ; \cf7 i <= \cf8 10\cf5 ; \cf7 i++ )\{\
        \cf5 int \cf7 sub\cf5 ;\
        \cf7 sub = vetor_A[i - \cf8 1\cf7 ] - vetor_B[fim-\cf8 1\cf7 ]\cf5 ;\
        \cf7 fim --\cf5 ;\
\
        \cf7 vetor_C[i-\cf8 1\cf7 ] = sub\cf5 ;\
    \cf7 \}\
\
    \cf5 for\cf7 (\cf5 int \cf7 i = \cf8 0\cf5 ; \cf7 i <= \cf8 9\cf5 ; \cf7 i++ )\{\
        \cf5 if\cf7 ( i == \cf8 0\cf7 )printf(\cf4 "C = "\cf7 )\cf5 ;\
        \cf7 soma_acumulada += vetor_C[i]\cf5 ;\
        \cf7 printf(\cf4 "%d "\cf5 ,\cf7 vetor_C[i])\cf5 ;\
        if \cf7 (i == \cf8 9\cf7 )printf(\cf4 "\cf5 \\n\cf4 "\cf7 )\cf5 ;\
\
    \cf7 \}\
    printf(\cf4 "Soma acumulada = %d"\cf5 ,\cf7 soma_acumulada)\cf5 ;\
    return \cf8 0\cf5 ;\
\cf7 \}\
}