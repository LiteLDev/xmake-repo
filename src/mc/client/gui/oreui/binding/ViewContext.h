#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI::Detail {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ViewContext : public ::OreUI::Detail::IBindable, public ::OreUI::Debug::IBindingsDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Detail::QueryRegistry>>   mQueries;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Detail::CommandRegistry>> mCommands;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onReadyForBindings() /*override*/;

    virtual void onSuspend() /*override*/;

    virtual void onBindingsReleased() /*override*/;

    virtual void update(double const time) /*override*/;

    virtual ::std::vector<::OreUI::Debug::QueryInformation> getQueryInformation() const /*override*/;

    virtual ::std::vector<::OreUI::Detail::ICommandGroup*> getCommands() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onReadyForBindings();

    MCAPI void $onSuspend();

    MCFOLD void $onBindingsReleased();

    MCAPI void $update(double const time);

    MCAPI ::std::vector<::OreUI::Debug::QueryInformation> $getQueryInformation() const;

    MCAPI ::std::vector<::OreUI::Detail::ICommandGroup*> $getCommands() const;
    // NOLINTEND
};
#else // @header-generator platform
class ViewContext {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI::Detail
