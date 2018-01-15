// @copyright 2017-2018 zzu_softboy <zzu_softboy@163.com>
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Created by softboy on 2018/01/15.

// ****************************************************************************
// *                                                                          *
// *     (C) Copyright Paul Mensonides 2002-2011.                             *
// *     (C) Copyright Edward Diener 2011.                                    *
// *     Distributed under the Boost Software License, Version 1.0. (See      *
// *     accompanying file LICENSE_1_0.txt or copy at                         *
// *     http://www.boost.org/LICENSE_1_0.txt)                                *
// *                                                                          *
// ****************************************************************************
// 
// See http://www.boost.org for most recent version.

#ifndef PDK_STDEXT_PREPROCESSOR_PUNCTUATION_PAREN_IF_H
#define PDK_STDEXT_PREPROCESSOR_PUNCTUATION_PAREN_IF_H

#include "pdk/stdext/preprocessor/config/Config.h"
#include "pdk/stdext/preprocessor/control/If.h"
#include "pdk/stdext/preprocessor/facilities/Empty.h"
#include "pdk/stdext/preprocessor/punctuation/Paren.h"

// PDK_PP_LPAREN_IF
# if ~PDK_PP_CONFIG_FLAGS() & PDK_PP_CONFIG_EDG()
#    define PDK_PP_LPAREN_IF(cond) PDK_PP_IF(cond, PDK_PP_LPAREN, PDK_PP_EMPTY)()
# else
#    define PDK_PP_LPAREN_IF(cond) PDK_PP_LPAREN_IF_I(cond)
#    define PDK_PP_LPAREN_IF_I(cond) PDK_PP_IF(cond, PDK_PP_LPAREN, PDK_PP_EMPTY)()
# endif

// PDK_PP_RPAREN_IF
# if ~PDK_PP_CONFIG_FLAGS() & PDK_PP_CONFIG_EDG()
#    define PDK_PP_RPAREN_IF(cond) PDK_PP_IF(cond, PDK_PP_RPAREN, PDK_PP_EMPTY)()
# else
#    define PDK_PP_RPAREN_IF(cond) PDK_PP_RPAREN_IF_I(cond)
#    define PDK_PP_RPAREN_IF_I(cond) PDK_PP_IF(cond, PDK_PP_RPAREN, PDK_PP_EMPTY)()
# endif

#endif // PDK_STDEXT_PREPROCESSOR_PUNCTUATION_PAREN_IF_H