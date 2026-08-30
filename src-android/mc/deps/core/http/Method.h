#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/DEL.h"
#include "mc/deps/core/http/GET.h"
#include "mc/deps/core/http/HEAD.h"
#include "mc/deps/core/http/PATCH.h"
#include "mc/deps/core/http/POST.h"
#include "mc/deps/core/http/PUT.h"

namespace Bedrock::Http {

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

} // namespace Bedrock::Http
