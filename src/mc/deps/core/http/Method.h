#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/http/DEL.h"
#include "mc/deps/core/http/GET.h"
#include "mc/deps/core/http/HEAD.h"
#include "mc/deps/core/http/PATCH.h"
#include "mc/deps/core/http/POST.h"
#include "mc/deps/core/http/PUT.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::Http {

#if defined(LL_PLAT_A) // @header-generator platform
class Method : public ::std::variant<
                   Bedrock::Http::MethodType::POST,
                   Bedrock::Http::MethodType::PUT,
                   Bedrock::Http::MethodType::GET,
                   Bedrock::Http::MethodType::DEL,
                   Bedrock::Http::MethodType::HEAD,
                   Bedrock::Http::MethodType::PATCH> {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool hasBody() const;

    MCNAPI std::string const& name() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Http::Method const& DEL();

    MCNAPI static ::Bedrock::Http::Method const& GET();

    MCNAPI static ::Bedrock::Http::Method const& HEAD();

    MCNAPI static ::Bedrock::Http::Method const& PATCH();

    MCNAPI static ::Bedrock::Http::Method const& POST();

    MCNAPI static ::Bedrock::Http::Method const& PUT();
    // NOLINTEND
};
#else // @header-generator platform
class Method {};
#endif // @header-generator platform

} // namespace Bedrock::Http
