#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/renderers/IPaperDollUIDefSource.h"

// auto generated forward declare list
// clang-format off
class UIResolvedDef;
// clang-format on

class PaperDollResolvedUIDefSource : public ::IPaperDollUIDefSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::UIResolvedDef const&> mDef;
    // NOLINTEND

public:
    // prevent constructor by default
    PaperDollResolvedUIDefSource& operator=(PaperDollResolvedUIDefSource const&);
    PaperDollResolvedUIDefSource(PaperDollResolvedUIDefSource const&);
    PaperDollResolvedUIDefSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PaperDollResolvedUIDefSource();

    virtual bool getAsBool(std::string_view, bool) const;

    virtual float getAsFloat(std::string_view, float) const;

    virtual std::string getAsString(std::string_view, std::string_view) const;

    virtual void markUnused(std::string_view) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PaperDollResolvedUIDefSource(::UIResolvedDef const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::UIResolvedDef const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $getAsBool(std::string_view, bool) const;

    MCNAPI float $getAsFloat(std::string_view, float) const;

    MCNAPI std::string $getAsString(std::string_view, std::string_view) const;

    MCNAPI void $markUnused(std::string_view) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/renderers/IPaperDollUIDefSource.h"

// auto generated forward declare list
// clang-format off
class UIResolvedDef;
// clang-format on

class PaperDollResolvedUIDefSource : public ::IPaperDollUIDefSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::UIResolvedDef const&> mDef;
    // NOLINTEND

public:
    // prevent constructor by default
    PaperDollResolvedUIDefSource& operator=(PaperDollResolvedUIDefSource const&);
    PaperDollResolvedUIDefSource(PaperDollResolvedUIDefSource const&);
    PaperDollResolvedUIDefSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool getAsBool(::std::string_view key, bool defaultValue) const /*override*/;

    virtual float getAsFloat(::std::string_view key, float defaultValue) const /*override*/;

    virtual ::std::string getAsString(::std::string_view key, ::std::string_view defaultValue) const /*override*/;

    virtual void markUnused(::std::string_view key) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $getAsBool(::std::string_view key, bool defaultValue) const;

    MCAPI float $getAsFloat(::std::string_view key, float defaultValue) const;

    MCAPI ::std::string $getAsString(::std::string_view key, ::std::string_view defaultValue) const;

    MCAPI void $markUnused(::std::string_view key) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class PaperDollResolvedUIDefSource {};
#endif // @header-generator platform
#endif // @header-generator platform
