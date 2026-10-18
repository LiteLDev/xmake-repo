#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class LabTableReaction;
// clang-format on

class LabTableReactionComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LabTableReactionComponent() = default;

    virtual void _onStart(::LabTableReaction&, ::BlockSource&);

    virtual void _onTick(::LabTableReaction&, ::BlockSource&);

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onEnd(::LabTableReaction&, ::BlockSource&);
#else // @header-generator platform
    virtual void _onEnd(::LabTableReaction& owner, ::BlockSource& region);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onStart(::LabTableReaction&, ::BlockSource&);
#else // @header-generator platform
    MCFOLD void $_onStart(::LabTableReaction&, ::BlockSource&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onTick(::LabTableReaction&, ::BlockSource&);
#else // @header-generator platform
    MCFOLD void $_onTick(::LabTableReaction&, ::BlockSource&);


#endif // @header-generator platform
    // NOLINTEND
};
