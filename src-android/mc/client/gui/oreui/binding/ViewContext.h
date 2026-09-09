#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/interface/IBindable.h"
#include "mc/client/gui/oreui/binding/interface/debug/IBindingsDataProvider.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Debug { struct QueryInformation; }
namespace OreUI::Detail { class CommandRegistry; }
namespace OreUI::Detail { class ICommandGroup; }
namespace OreUI::Detail { class QueryRegistry; }
// clang-format on

namespace OreUI::Detail {

class ViewContext : public ::OreUI::Detail::IBindable, public ::OreUI::Debug::IBindingsDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::Detail::QueryRegistry>>   mQueries;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::Detail::CommandRegistry>> mCommands;
    // NOLINTEND

public:
    // prevent constructor by default
    ViewContext();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ViewContext();

    virtual void onReadyForBindings();

    virtual void onSuspend();

    virtual void onBindingsReleased();

    virtual void update(double const);

    virtual std::vector<OreUI::Debug::QueryInformation> getQueryInformation() const;

    virtual std::vector<OreUI::Detail::ICommandGroup*> getCommands() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onReadyForBindings();

    MCNAPI void $onSuspend();

    MCNAPI void $onBindingsReleased();

    MCNAPI void $update(double const);

    MCNAPI std::vector<OreUI::Debug::QueryInformation> $getQueryInformation() const;

    MCNAPI std::vector<OreUI::Detail::ICommandGroup*> $getCommands() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI::Detail
