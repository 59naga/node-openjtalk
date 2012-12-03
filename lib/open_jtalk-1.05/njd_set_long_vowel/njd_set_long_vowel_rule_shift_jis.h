/* ----------------------------------------------------------------- */
/*           The Japanese TTS System "Open JTalk"                    */
/*           developed by HTS Working Group                          */
/*           http://open-jtalk.sourceforge.net/                      */
/* ----------------------------------------------------------------- */
/*                                                                   */
/*  Copyright (c) 2008-2011  Nagoya Institute of Technology          */
/*                           Department of Computer Science          */
/*                                                                   */
/* All rights reserved.                                              */
/*                                                                   */
/* Redistribution and use in source and binary forms, with or        */
/* without modification, are permitted provided that the following   */
/* conditions are met:                                               */
/*                                                                   */
/* - Redistributions of source code must retain the above copyright  */
/*   notice, this list of conditions and the following disclaimer.   */
/* - Redistributions in binary form must reproduce the above         */
/*   copyright notice, this list of conditions and the following     */
/*   disclaimer in the documentation and/or other materials provided */
/*   with the distribution.                                          */
/* - Neither the name of the HTS working group nor the names of its  */
/*   contributors may be used to endorse or promote products derived */
/*   from this software without specific prior written permission.   */
/*                                                                   */
/* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND            */
/* CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,       */
/* INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF          */
/* MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE          */
/* DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS */
/* BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,          */
/* EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED   */
/* TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,     */
/* DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON */
/* ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,   */
/* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY    */
/* OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE           */
/* POSSIBILITY OF SUCH DAMAGE.                                       */
/* ----------------------------------------------------------------- */

#ifndef NJD_SET_LONG_VOWEL_RULE_H
#define NJD_SET_LONG_VOWEL_RULE_H

#ifdef __cplusplus
#define NJD_SET_LONG_VOWEL_RULE_H_START extern "C" {
#define NJD_SET_LONG_VOWEL_RULE_H_END   }
#else
#define NJD_SET_LONG_VOWEL_RULE_H_START
#define NJD_SET_LONG_VOWEL_RULE_H_END
#endif                          /* __CPLUSPLUS */

NJD_SET_LONG_VOWEL_RULE_H_START;

static const char njd_set_long_vowel_kanji_range[] = {
#ifdef CHARSET_EUC_JP
   2, 0xA1, 0xFE,
   3, 0x8F, 0x8F,
#endif                          /* CHARSET_EUC_JP */
#ifdef CHARSET_SHIFT_JIS
   2, 0x81, 0xFC,
#endif                          /* CHARSET_SHIFT_JIS */
#ifdef CHARSET_UTF_8
   2, 0xC0, 0xDF,
   3, 0xE0, 0xEF,
   4, 0xF0, 0xF7,
#endif                          /* CHARSET_UTF_8 */
   -1, -1, -1
};

static const char *njd_set_long_vowel_table[] = {
   "�G�C", "�G�[",
   "�P�C", "�P�[",
   "�Z�C", "�Z�[",
   "�e�C", "�e�[",
   "�l�C", "�l�[",
   "�w�C", "�w�[",
   "���C", "���[",
   "���C", "���[",
   "�Q�C", "�Q�[",
   "�[�C", "�Z�[",
   "�f�C", "�f�[",
   "�x�C", "�x�[",
   "�y�C", "�y�[",
   "���C", "���[",
   /*
      "���F�C", "���F�[",
      "���F�C", "���F�[",
      "�~�F�C", "�~�F�[",
      "�t�F�C", "�t�F�[",
      "�s�F�C", "�s�F�[",
      "�r�F�C", "�r�F�[",
      "�q�F�C", "�q�F�[",
      "�j�F�C", "�j�F�[",
      "�f�F�C", "�f�F�[",
      "�c�F�C", "�c�F�[",
      "�`�F�C", "�`�F�[",
      "�W�F�C", "�W�F�[",
      "�V�F�C", "�V�F�[",
      "�M�F�C", "�M�F�[",
      "�L�F�C", "�L�F�[",
      "�E�F�C", "�E�F�[",
      "�C�F�C", "�C�F�[",
    */
   NULL, NULL
};

NJD_SET_LONG_VOWEL_RULE_H_END;

#endif                          /* !NJD_SET_LONG_VOWEL_RULE_H */