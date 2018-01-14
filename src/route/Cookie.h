/*
 * =====================================================================================
 *
 *       Filename:  TCookie.h
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2017年12月14日 16时24分24秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  liukang
 *        Company:
 *
 * =====================================================================================
 */

#pragma once

#include <TString.h>
#include <map>

using namespace WebTool;

struct CookieValue{
    TString value;      ///cookie值
    TString expires;    ///cookie有效期,GMT格式日期字符串,默认为空
    TString path;       ///cookie路径,默认为"/"
    TString domain;     ///cookie域,默认为""
};
typedef TString CookieKey;

typedef std::map<CookieKey, CookieValue> CookieList;

class  Cookie
{
public:
    Cookie(const TString cookieStr);
    ~Cookie();

    /// 取得cookie内容
    TString getCookie( const TString &name );

    /// 取得cookie内容
    inline TString operator[] ( const TString &name ) {
        return this->getCookie( name );
    }

    /// 设置cookie内容
    /// \param name cookie名字
    /// \param value cookie值
    /// \param expires cookie有效期,GMT格式日期字符串,默认为空
    /// \param path cookie路径,默认为"/"
    /// \param domain cookie域,默认为""
    void setCookie( const TString &name, const TString &value,
                    const TString &expires = "", const TString &path = "",
                    const TString &domain = "" );

    /// 清除指定的cookie内容
    /// \param name cookie名字
    inline void delCookie( const TString &name );

    TString toSetCookieStr();
private:

    CookieList m_mapCookies;

};

