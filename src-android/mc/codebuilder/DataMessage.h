#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/codebuilder/DataResponsePurpose.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace CodeBuilder {

struct DataMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>                                  body;
    ::ll::TypedStorage<8, 24, std::string>                       requestId;
    ::ll::TypedStorage<1, 1, ::CodeBuilder::DataResponsePurpose> type;
    // NOLINTEND
};

} // namespace CodeBuilder
