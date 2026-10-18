#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/IBooleanDataProvider.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/IBooleanDataProvider.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Settings {

#if defined(LL_PLAT_A) // @header-generator platform
class TextureStreamingDataProvider : public ::Settings::IBooleanDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::OptionID>                                     mOptionId;
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&>                             mOptions;
    ::ll::TypedStorage<8, 16, ::Settings::RegistryBuilder::IBuilderContext&> mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureStreamingDataProvider& operator=(TextureStreamingDataProvider const&);
    TextureStreamingDataProvider(TextureStreamingDataProvider const&);
    TextureStreamingDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextureStreamingDataProvider();

    virtual bool canModify() const;

    virtual bool getValue() const;

    virtual void setValue(bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canModify() const;

    MCNAPI bool $getValue() const;

    MCNAPI void $setValue(bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class TextureStreamingDataProvider : public ::Settings::IBooleanDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::OptionID>                                    mOptionId;
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&>                            mOptions;
    ::ll::TypedStorage<8, 8, ::Settings::RegistryBuilder::IBuilderContext&> mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureStreamingDataProvider& operator=(TextureStreamingDataProvider const&);
    TextureStreamingDataProvider(TextureStreamingDataProvider const&);
    TextureStreamingDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool getValue() const /*override*/;

    virtual void setValue(bool value) /*override*/;

    virtual bool canModify() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $getValue() const;

    MCAPI void $setValue(bool value);

    MCAPI bool $canModify() const;
    // NOLINTEND
};
#else // @header-generator platform
class TextureStreamingDataProvider {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Settings
