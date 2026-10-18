#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/NullType.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class CompoundTag;
#if defined(LL_PLAT_A) // @header-generator platform
struct GameRuleId;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class GameRule {
public:
    // GameRule inner types declare
    // clang-format off
    class ValidationError;
    // clang-format on

    // GameRule inner types define
    enum class Type : uchar {
        Invalid = 0,
        Bool    = 1,
        Int     = 2,
        Float   = 3,
    };

    class ValidationError {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 1, bool>                      mSuccess;
        ::ll::TypedStorage<8, 24, std::string>              mErrorDescription;
        ::ll::TypedStorage<8, 24, std::vector<std::string>> mErrorParameters;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ValidationError();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        ::ll::TypedStorage<1, 1, bool>                          mSuccess;
        ::ll::TypedStorage<8, 32, ::std::string>                mErrorDescription;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mErrorParameters;
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using Value = std::variant<cereal::NullType, bool, int, float>;
#else // @header-generator platform
    using CommandValueRedirectCallback = ::std::function<::std::variant<::cereal::NullType, bool, int, float>(
        ::std::variant<::cereal::NullType, bool, int, float> const&
    )>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using TagDataNotFoundCallback = std::function<void(GameRule&, const BaseGameVersion&, const CompoundTag&)>;
#else // @header-generator platform
    using TagDataNotFoundCallback = ::std::function<void(::GameRule&, ::BaseGameVersion const&, ::CompoundTag const&)>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using ValidateValueCallback =
        std::function<bool(const std::variant<cereal::NullType, bool, int, float>&, GameRule::ValidationError*)>;
#else // @header-generator platform
    using ValidateValueCallback = ::std::function<
        bool(::std::variant<::cereal::NullType, bool, int, float> const&, ::GameRule::ValidationError*)>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using CommandValueRedirectCallback = std::function<
        std::variant<cereal::NullType, bool, int, float>(const std::variant<cereal::NullType, bool, int, float>&)>;
#else // @header-generator platform
    using Value = ::std::variant<::cereal::NullType, bool, int, float>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                             mShouldSave;
    ::ll::TypedStorage<1, 1, ::GameRule::Type>                                 mType;
    ::ll::TypedStorage<4, 8, std::variant<cereal::NullType, bool, int, float>> mValue;
    ::ll::TypedStorage<8, 24, std::string>                                     mName;
    ::ll::TypedStorage<1, 1, bool>                                             mAllowUseInCommand;
    ::ll::TypedStorage<1, 1, bool>                                             mAllowUseInScripting;
    ::ll::TypedStorage<1, 1, bool>                                             mIsDefaultSet;
    ::ll::TypedStorage<1, 1, bool>                                             mRequiresCheats;
    ::ll::TypedStorage<1, 1, bool>                                             mCanBeModifiedByPlayer;
    ::ll::UntypedStorage<8, 48>                                                mTagNotFoundCallback;
    ::ll::UntypedStorage<8, 48>                                                mValidateValueCallback;
    ::ll::TypedStorage<8, 24, std::map<std::string, int>>                      mCommandEnumNames;
    ::ll::TypedStorage<4, 4, int>                                              mMinCommandVersion;
    ::ll::TypedStorage<4, 4, int>                                              mMaxCommandVersion;
    ::ll::UntypedStorage<8, 48>                                                mCommandValueRedirectConverter;
    ::ll::UntypedStorage<4, 16>                                                mCommandValueRedirectTarget;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                                 mShouldSave;
    ::ll::TypedStorage<1, 1, ::GameRule::Type>                                     mType;
    ::ll::TypedStorage<4, 8, ::std::variant<::cereal::NullType, bool, int, float>> mValue;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mName;
    ::ll::TypedStorage<1, 1, bool>                                                 mAllowUseInCommand;
    ::ll::TypedStorage<1, 1, bool>                                                 mAllowUseInScripting;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsDefaultSet;
    ::ll::TypedStorage<1, 1, bool>                                                 mRequiresCheats;
    ::ll::TypedStorage<1, 1, bool>                                                 mCanBeModifiedByPlayer;
    ::ll::TypedStorage<8, 64, ::std::function<void(::GameRule&, ::BaseGameVersion const&, ::CompoundTag const&)>>
        mTagNotFoundCallback;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<
            bool(::std::variant<::cereal::NullType, bool, int, float> const&, ::GameRule::ValidationError*)>>
                                                              mValidateValueCallback;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, int>> mCommandEnumNames;
    ::ll::TypedStorage<4, 4, int>                             mMinCommandVersion;
    ::ll::TypedStorage<4, 4, int>                             mMaxCommandVersion;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<::std::variant<::cereal::NullType, bool, int, float>(
            ::std::variant<::cereal::NullType, bool, int, float> const&
        )>>
                                                   mCommandValueRedirectConverter;
    ::ll::TypedStorage<4, 8, ::std::optional<int>> mCommandValueRedirectTarget;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI GameRule();
#else // @header-generator platform
    MCAPI GameRule();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI GameRule(::GameRule const&);
#else // @header-generator platform
    MCAPI GameRule(::GameRule&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI GameRule(::GameRule&&);
#else // @header-generator platform
    MCAPI GameRule(::GameRule const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool allowUseInCommand() const;
#else // @header-generator platform
    MCAPI GameRule(::std::string const& name, bool canBeModifiedByPlayer);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool allowUseInScripting() const;
#else // @header-generator platform
    MCAPI GameRule(
        ::std::string const& name,
        bool                 value,
        bool                 shouldSave,
        bool                 allowInCommand,
        bool                 requiresCheats,
        bool                 canBeModifiedByPlayer
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::variant<cereal::NullType, bool, int, float>
           applyCommandValueRedirect(std::variant<cereal::NullType, bool, int, float> const&) const;
#else // @header-generator platform
    MCAPI bool _set(
        ::std::variant<::cereal::NullType, bool, int, float> const& v,
        bool*                                                       pValidated,
        ::GameRule::ValidationError*                                errorOutput
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canBeModifiedByPlayer() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool compareValue(::std::variant<::cereal::NullType, bool, int, float> const& v) const;

    MCAPI bool getBool() const;

    MCAPI int getInt() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool compareValue(std::variant<cereal::NullType, bool, int, float> const&) const;
#else // @header-generator platform
    MCAPI ::GameRule& operator=(::GameRule&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getBool() const;
#else // @header-generator platform
    MCAPI ::GameRule& operator=(::GameRule const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::map<std::string, int> const& getCommandEnumNames() const;
#else // @header-generator platform
    MCAPI bool operator==(::GameRule const& other) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::GameRuleId getCommandValueRedirectTarget() const;

    MCNAPI float getFloat() const;

    MCNAPI int getInt() const;

    MCNAPI std::string getLowercaseName() const;

    MCNAPI int getMaxCommandVersion() const;

    MCNAPI int getMinCommandVersion() const;

    MCNAPI std::string const& getName() const;

    MCNAPI ::GameRule::Type getType() const;

    MCNAPI std::variant<cereal::NullType, bool, int, float> const& getValue() const;

    MCNAPI bool hasCommandEnumNames() const;

    MCNAPI bool hasCommandValueRedirect() const;

    MCNAPI bool isCommandVersionUnrestricted() const;

    MCNAPI ::GameRule& operator=(::GameRule const&);

    MCNAPI bool operator==(::GameRule const&) const;

    MCNAPI bool requiresCheats() const;

    MCNAPI void resetType(::GameRule::Type);

    MCNAPI bool setBool(bool, bool*, ::GameRule::ValidationError*);

    MCNAPI void setCanBeModifiedByPlayer(bool);

    MCNAPI bool setFloat(float, bool*, ::GameRule::ValidationError*);

    MCNAPI bool setInt(int, bool*, ::GameRule::ValidationError*);

    MCNAPI ::GameRule& setName(std::string const&);

    MCNAPI bool shouldSave() const;
#else // @header-generator platform
    MCAPI ~GameRule();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::GameRule const&);
#else // @header-generator platform
    MCAPI void* $ctor(::GameRule&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::GameRule&&);
#else // @header-generator platform
    MCAPI void* $ctor(::GameRule const&);

    MCAPI void* $ctor(::std::string const& name, bool canBeModifiedByPlayer);

    MCAPI void* $ctor(
        ::std::string const& name,
        bool                 value,
        bool                 shouldSave,
        bool                 allowInCommand,
        bool                 requiresCheats,
        bool                 canBeModifiedByPlayer
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
