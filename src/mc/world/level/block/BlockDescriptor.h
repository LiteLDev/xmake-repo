#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/common/WeakPtr.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"
#include "mc/molang/MolangVersion.h"
#include "mc/platform/threading/SpinLockImpl.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockState;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockType;
#else // @header-generator platform
#endif // @header-generator platform
class CompoundTag;
class ExpressionNode;
namespace SharedTypes::Legacy { struct BlockDescriptor; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockDescriptor {
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
public:
    char filler[0xB8];

#endif // @header-generator platform
public:
    // BlockDescriptor inner types declare
    // clang-format off
    class ResolveHelper;
    class ResolvedState;
    struct State;
    // clang-format on

    // BlockDescriptor inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum CompareType : uint {
#else // @header-generator platform
    enum class CompareType : int {
#endif // @header-generator platform
        AnyTag    = 0,
        BlockName = 1,
        States    = 2,
        Unknown   = 3,
    };

    class ResolveHelper {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BlockDescriptor&> mBlockDescriptor;
        // NOLINTEND

    public:
        // prevent constructor by default
        ResolveHelper& operator=(ResolveHelper const&);
        ResolveHelper(ResolveHelper const&);
        ResolveHelper();

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void resolve(bool);
#else // @header-generator platform
        MCAPI void resolve(bool logInvalidBlocks);
#endif // @header-generator platform
        // NOLINTEND
    };

    class ResolvedState {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::gsl::not_null<const BlockState*>> mBlockState;
        ::ll::TypedStorage<4, 4, int>                                mValue;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::gsl::not_null<::BlockState const*>> mBlockState;
        ::ll::TypedStorage<4, 4, int>                                  mValue;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        ResolvedState& operator=(ResolvedState const&);
        ResolvedState(ResolvedState const&);
        ResolvedState();
#else // @header-generator platform
#endif // @header-generator platform
    };

    struct State {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 40, ::HashedString> mName;
        ::ll::UntypedStorage<8, 32>               mState;
#else // @header-generator platform
        ::ll::TypedStorage<8, 48, ::HashedString>                                   mName;
        ::ll::TypedStorage<8, 40, ::SharedTypes::Legacy::BlockDescriptor::Compound> mState;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        State();

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI State(::HashedString, std::string const&);
#else // @header-generator platform
        MCAPI State(::HashedString name, ::SharedTypes::Legacy::BlockDescriptor::Compound state);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI State(::HashedString, int);
#else // @header-generator platform
        MCAPI State(::HashedString name, ::std::string const& stringState);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~State();
#else // @header-generator platform
        MCAPI ~State();
#endif // @header-generator platform
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void* $ctor(::HashedString, std::string const&);
#else // @header-generator platform
        MCAPI void* $ctor(::HashedString name, ::SharedTypes::Legacy::BlockDescriptor::Compound state);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void* $ctor(::HashedString, int);
#else // @header-generator platform
        MCAPI void* $ctor(::HashedString name, ::std::string const& stringState);
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
        MCFOLD void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

    using CompoundProxy = ::SharedTypes::Legacy::BlockDescriptor::Compound;

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::BlockDescriptor::ResolveHelper>             mResolveHelper;
    ::ll::TypedStorage<8, 40, ::HashedString>                              mBlockName;
    ::ll::TypedStorage<1, 1, bool>                                         mIsComplexAlias;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ExpressionNode>>             mTags;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor::State>>         mRawStates;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor::ResolvedState>> mResolvedStates;
    ::ll::TypedStorage<4, 4, ::BlockDescriptor::CompareType>               mCompareType;
    ::ll::TypedStorage<1, 1, bool>                                         mContentLogOnError;
    ::ll::TypedStorage<8, 8, ::Block const*>                               mBlock;
    ::ll::TypedStorage<1, 1, bool>                                         mValid;
    ::ll::TypedStorage<1, 1, bool>                                         mIsDeferred;
    ::ll::TypedStorage<8, 24, ::SpinLockImpl>                              mLock;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::BlockDescriptor::ResolveHelper>                 mResolveHelper;
    ::ll::TypedStorage<8, 48, ::HashedString>                                  mBlockName;
    ::ll::TypedStorage<1, 1, bool>                                             mIsComplexAlias;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ExpressionNode>>             mTags;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor::State>>         mRawStates;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor::ResolvedState>> mResolvedStates;
    ::ll::TypedStorage<4, 4, ::BlockDescriptor::CompareType>                   mCompareType;
    ::ll::TypedStorage<1, 1, bool>                                             mContentLogOnError;
    ::ll::TypedStorage<8, 8, ::Block const*>                                   mBlock;
    ::ll::TypedStorage<1, 1, bool>                                             mValid;
    ::ll::TypedStorage<1, 1, bool>                                             mIsDeferred;
    ::ll::TypedStorage<8, 24, ::SpinLockImpl>                                  mLock;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BlockDescriptor();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockDescriptor();
#else // @header-generator platform
    MCAPI explicit BlockDescriptor(::SharedTypes::Legacy::BlockDescriptor desc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit BlockDescriptor(::SharedTypes::Legacy::BlockDescriptor);
#else // @header-generator platform
    MCAPI explicit BlockDescriptor(::HashedString const& fullName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockDescriptor(::BlockDescriptor const&);
#else // @header-generator platform
    MCAPI BlockDescriptor(::BlockDescriptor&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockDescriptor(::BlockDescriptor&&);
#else // @header-generator platform
    MCAPI BlockDescriptor(::BlockDescriptor const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _anyTagsMatch(::Block const&) const;
#else // @header-generator platform
    MCAPI BlockDescriptor(::std::string const& name, ::std::vector<::BlockDescriptor::State>&& states);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _statesMatch(::Block const&) const;
#else // @header-generator platform
    MCAPI bool _anyTagsMatch(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& getBlockOrUnknownBlock() const;
#else // @header-generator platform
    MCAPI bool _statesMatch(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockDescriptor::CompareType const& getCompareType() const;
#else // @header-generator platform
    MCAPI ::Block const& getBlockOrUnknownBlock() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getFullName() const;
#else // @header-generator platform
    MCAPI ::BlockDescriptor::CompareType const& getCompareType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<BlockDescriptor::State> const& getStates() const;
#else // @header-generator platform
    MCAPI ::std::string const& getFullName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getTagExpression() const;
#else // @header-generator platform
    MCAPI bool isValid() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isValid() const;
#else // @header-generator platform
    MCAPI bool matches(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool matches(::Block const&) const;
#else // @header-generator platform
    MCAPI bool matches(::BlockDescriptor const& otherDescriptor) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool matches(::BlockDescriptor const&) const;
#else // @header-generator platform
    MCAPI void operator=(::BlockDescriptor&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void operator=(::BlockDescriptor const&);
#else // @header-generator platform
    MCAPI void operator=(::BlockDescriptor const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void operator=(::BlockDescriptor&&);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CompoundTag> toCompoundTag() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::BlockDescriptor const&) const;
#else // @header-generator platform
    MCAPI ::Block const* tryGetBlock() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setContentLogOnError(bool) const;
#else // @header-generator platform
    MCAPI ::Block const* tryGetBlockNoLogging() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<CompoundTag> toCompoundTag() const;

    MCNAPI ::Block const* tryGetBlock() const;

    MCNAPI ::Block const* tryGetBlockNoLogging() const;
#else // @header-generator platform
    MCAPI ~BlockDescriptor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool anyMatch(std::vector<BlockDescriptor> const&, ::Block const&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool anyMatch(std::vector<BlockDescriptor> const&, ::BlockDescriptor const&);
#else // @header-generator platform
    MCAPI static ::BlockDescriptor fromCompoundTag(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static ::BlockDescriptor fromTagExpression(::std::string const& tagExpression, ::MolangVersion molangVersion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BlockDescriptor fromCompoundTag(::CompoundTag const&);

    MCNAPI static ::BlockDescriptor fromTagExpression(std::string const&, ::MolangVersion const);

    MCNAPI static ::SharedTypes::Legacy::BlockDescriptor toSharedTypes(::BlockDescriptor const&);
#else // @header-generator platform
    MCAPI static ::SharedTypes::Legacy::BlockDescriptor toSharedTypes(::BlockDescriptor const& instance);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::std::add_lvalue_reference_t<char const[5]> JSON_NAME_FIELD();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<char const[]> JSON_NAME_FIELD();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::std::add_lvalue_reference_t<char const[7]> JSON_STATES_FIELD();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<char const[]> JSON_STATES_FIELD();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::std::add_lvalue_reference_t<char const[5]> JSON_TAGS_FIELD();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<char const[]> JSON_TAGS_FIELD();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::Legacy::BlockDescriptor desc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::Legacy::BlockDescriptor);
#else // @header-generator platform
    MCAPI void* $ctor(::HashedString const& fullName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BlockDescriptor const&);
#else // @header-generator platform
    MCAPI void* $ctor(::BlockDescriptor&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BlockDescriptor&&);
#else // @header-generator platform
    MCAPI void* $ctor(::BlockDescriptor const& rhs);

    MCAPI void* $ctor(::std::string const& name, ::std::vector<::BlockDescriptor::State>&& states);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
