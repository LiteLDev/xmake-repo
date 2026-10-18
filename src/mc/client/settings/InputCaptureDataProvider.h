#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/input/KeyboardType.h"
#include "mc/client/settings/IBooleanDataProvider.h"

// auto generated forward declare list
// clang-format off
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/input/KeyboardType.h"
#include "mc/client/settings/IBooleanDataProvider.h"

// auto generated forward declare list
// clang-format off
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Settings::InputControlsSettingsHelper {

#if defined(LL_PLAT_A) // @header-generator platform
class InputCaptureDataProvider : public ::Settings::IBooleanDataProvider {
public:
    // InputCaptureDataProvider inner types define
    using GetterCallback = std::function<
        bool(const Settings::RegistryBuilder::IBuilderContext&, std::string_view, std::optional<KeyboardType>)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                mAction;
    ::ll::TypedStorage<4, 8, std::optional<KeyboardType>> mType;
    ::ll::UntypedStorage<8, 16>                           mContext;
    ::ll::UntypedStorage<8, 48>                           mCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    InputCaptureDataProvider& operator=(InputCaptureDataProvider const&);
    InputCaptureDataProvider(InputCaptureDataProvider const&);
    InputCaptureDataProvider();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class InputCaptureDataProvider : public ::Settings::IBooleanDataProvider {
public:
    // InputCaptureDataProvider inner types define
    using GetterCallback = ::std::function<
        bool(::Settings::RegistryBuilder::IBuilderContext const&, ::std::string_view, ::std::optional<::KeyboardType>)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                mAction;
    ::ll::TypedStorage<4, 8, ::std::optional<::KeyboardType>>               mType;
    ::ll::TypedStorage<8, 8, ::Settings::RegistryBuilder::IBuilderContext&> mContext;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<bool(
            ::Settings::RegistryBuilder::IBuilderContext const&,
            ::std::string_view,
            ::std::optional<::KeyboardType>
        )>>
        mCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    InputCaptureDataProvider& operator=(InputCaptureDataProvider const&);
    InputCaptureDataProvider(InputCaptureDataProvider const&);
    InputCaptureDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canModify() const /*override*/;

    virtual bool getValue() const /*override*/;

    virtual void setValue(bool) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $canModify() const;

    MCAPI bool $getValue() const;

    MCFOLD void $setValue(bool);
    // NOLINTEND
};
#else // @header-generator platform
class InputCaptureDataProvider {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Settings::InputControlsSettingsHelper
