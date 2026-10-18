#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace google_breakpad { class ExceptionHandler; }
// clang-format on

namespace Bedrock {

class BreakpadExceptionHandler : public ::Bedrock::ImplBase<
                                     Bedrock::BreakpadExceptionHandler,
                                     Bedrock::ImplCtor(const std::string&, const std::string&, bool (*)(bool))> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::google_breakpad::ExceptionHandler* getHandler() const = 0;
    // NOLINTEND
};

} // namespace Bedrock
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
