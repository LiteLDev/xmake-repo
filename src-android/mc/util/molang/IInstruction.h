#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct MolangEvalParams;
// clang-format on

namespace Molang::details {

class IInstruction {
public:
    // IInstruction inner types define
    using Func = void (*)(::MolangEvalParams&, void*);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IInstruction();

    virtual ::Molang::details::IInstruction* cloneAt(void*) const = 0;

    virtual ::Molang::details::IInstruction* moveTo(void*) = 0;

    virtual ulong getSize() const = 0;

    virtual auto getCodeAddress() const -> void (*)(::MolangEvalParams&, void*) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Molang::details
