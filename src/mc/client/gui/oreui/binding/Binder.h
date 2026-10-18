#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class CommandRegistry; }
namespace OreUI::Detail { class IPropertyObject; }
namespace OreUI::Detail { class IdType; }
namespace cohtml { class IEventHandler; }
namespace cohtml { class View; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IPropertyObject; }
namespace OreUI::Detail { class IdType; }
namespace cohtml { class View; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI::Detail {

#if defined(LL_PLAT_A) // @header-generator platform
class Binder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cohtml::View*> mView;
    // NOLINTEND

public:
    // prevent constructor by default
    Binder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Binder(::cohtml::View*);

    MCNAPI void destroyObject(::OreUI::Detail::IPropertyObject*) const;

    MCNAPI void triggerCreated(::OreUI::Detail::IdType, ::OreUI::Detail::IPropertyObject const&) const;

    MCNAPI void triggerUpdated(::OreUI::Detail::IdType, ::OreUI::Detail::IPropertyObject const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cohtml::View*);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class Binder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cohtml::View*> mView;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void triggerCreated(::OreUI::Detail::IdType id, ::OreUI::Detail::IPropertyObject const& object) const;

    MCAPI void triggerUpdated(::OreUI::Detail::IdType id, ::OreUI::Detail::IPropertyObject const& object) const;
    // NOLINTEND
};
#else // @header-generator platform
class Binder {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI::Detail
