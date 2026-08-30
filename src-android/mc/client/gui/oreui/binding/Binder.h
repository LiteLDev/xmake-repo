#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class CommandRegistry; }
namespace OreUI::Detail { class IPropertyObject; }
namespace OreUI::Detail { class IdType; }
namespace cohtml { class IEventHandler; }
namespace cohtml { class View; }
// clang-format on

namespace OreUI::Detail {

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

} // namespace OreUI::Detail
