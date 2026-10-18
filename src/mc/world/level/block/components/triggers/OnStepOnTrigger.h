#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/level/block/components/IBlockComponent.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockStepOnEvent; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class OnStepOnTrigger : public ::IBlockComponent, public ::DefinitionTrigger {
public:
    // prevent constructor by default
    OnStepOnTrigger& operator=(OnStepOnTrigger const&);
    OnStepOnTrigger(OnStepOnTrigger const&);

#else // @header-generator platform
class OnStepOnTrigger : public ::DefinitionTrigger, public ::IBlockComponent {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~OnStepOnTrigger();
#else // @header-generator platform
    virtual ~OnStepOnTrigger() = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void onEvent(::BlockEvents::BlockStepOnEvent const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void onEvent(::BlockEvents::BlockStepOnEvent const& eventData) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
