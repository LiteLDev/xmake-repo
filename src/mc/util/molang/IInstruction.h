#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct MolangEvalParams;
// clang-format on

namespace Molang::details {

class IInstruction {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // IInstruction inner types define
    using Func = void (*)(::MolangEvalParams&, void*);

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IInstruction();
#else // @header-generator platform
    virtual ~IInstruction() = default;
#endif // @header-generator platform

    virtual ::Molang::details::IInstruction* cloneAt(void*) const = 0;

    virtual ::Molang::details::IInstruction* moveTo(void*) = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getSize() const = 0;
#else // @header-generator platform
    virtual uint64 getSize() const = 0;
#endif // @header-generator platform

    virtual auto getCodeAddress() const -> void (*)(::MolangEvalParams&, void*) = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Molang::details
