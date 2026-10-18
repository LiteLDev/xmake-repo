#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/codebuilder/DataResponsePurpose.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace CodeBuilder {

struct DataMessage {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16>                                  body;
    ::ll::TypedStorage<8, 24, std::string>                       requestId;
    ::ll::TypedStorage<1, 1, ::CodeBuilder::DataResponsePurpose> type;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkac4feb;
    ::ll::UntypedStorage<8, 32> mUnk711733;
    ::ll::UntypedStorage<1, 1>  mUnkad7c7b;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    DataMessage& operator=(DataMessage const&);
    DataMessage(DataMessage const&);
    DataMessage();
#endif // @header-generator platform
};

} // namespace CodeBuilder
