#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/BedrockLoadContext.h"
#include "mc/molang/MolangVersion.h"

// auto generated forward declare list
// clang-format off
namespace CerealHelpers { class FileReferenceLoader; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace CerealHelpers {

class FileReferenceLoadContext : public ::BedrockLoadContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<CerealHelpers::FileReferenceLoader>> loader;
    ::ll::TypedStorage<8, 8, ::cereal::ReflectionCtx const&>                       ctx;
    // NOLINTEND

public:
    // prevent constructor by default
    FileReferenceLoadContext& operator=(FileReferenceLoadContext const&);
    FileReferenceLoadContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FileReferenceLoadContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace CerealHelpers
