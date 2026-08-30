#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/NullType.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class CompoundTag;
struct GameRuleId;
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
        // NOLINTEND
    };

    using Value = std::variant<cereal::NullType, bool, int, float>;

    using TagDataNotFoundCallback = std::function<void(GameRule&, const BaseGameVersion&, const CompoundTag&)>;

    using ValidateValueCallback =
        std::function<bool(const std::variant<cereal::NullType, bool, int, float>&, GameRule::ValidationError*)>;

    using CommandValueRedirectCallback = std::function<
        std::variant<cereal::NullType, bool, int, float>(const std::variant<cereal::NullType, bool, int, float>&)>;

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameRule();

    MCNAPI GameRule(::GameRule const&);

    MCNAPI GameRule(::GameRule&&);

    MCNAPI bool allowUseInCommand() const;

    MCNAPI bool allowUseInScripting() const;

    MCNAPI std::variant<cereal::NullType, bool, int, float>
           applyCommandValueRedirect(std::variant<cereal::NullType, bool, int, float> const&) const;

    MCNAPI bool canBeModifiedByPlayer() const;

    MCNAPI bool compareValue(std::variant<cereal::NullType, bool, int, float> const&) const;

    MCNAPI bool getBool() const;

    MCNAPI std::map<std::string, int> const& getCommandEnumNames() const;

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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::GameRule const&);

    MCNAPI void* $ctor(::GameRule&&);
    // NOLINTEND
};
