#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"

// auto generated forward declare list
// clang-format off
class Keymapping;
struct DuplicateKey;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

class RemappingLayoutRawIndex {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::vector<Keymapping>&> mKeymappings;
    ::ll::TypedStorage<8, 8, std::vector<Keymapping>&> mDefaultMappings;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::PubSub::Publisher<void (std::optional<ulong>), Bedrock::PubSub::ThreadModel::SingleThreaded, (Bedrock::PubSub::ReturnPolicyType)0>>> mRefreshKeymappingsPublisher;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    RemappingLayoutRawIndex& operator=(RemappingLayoutRawIndex const&);
    RemappingLayoutRawIndex(RemappingLayoutRawIndex const&);
    RemappingLayoutRawIndex();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void defaultKeyAtIndex(ulong);

    MCNAPI std::vector<DuplicateKey> generateIndicesOfDuplicates() const;

    MCNAPI ::Keymapping const& getKeymappingByIndex(ulong) const;

    MCNAPI ulong getNumKeymappings() const;

    MCNAPI bool isKeymappingDefault(ulong) const;

    MCNAPI void unassignDuplicateKeys(ulong);

    MCNAPI void unassignKeyAtIndex(ulong);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"

// auto generated forward declare list
// clang-format off
class Keymapping;
struct DuplicateKey;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

class RemappingLayoutRawIndex {
public:
    // RemappingLayoutRawIndex inner types define
    using RefreshKeymappingPublisher =
        ::Bedrock::PubSub::Publisher<void(::std::optional<uint64>), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::vector<::Keymapping>&> mKeymappings;
    ::ll::TypedStorage<8, 8, ::std::vector<::Keymapping>&> mDefaultMappings;
    ::ll::TypedStorage<
        8,
        16,
        ::std::shared_ptr<
            ::Bedrock::PubSub::
                Publisher<void(::std::optional<uint64>), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>>
        mRefreshKeymappingsPublisher;
    // NOLINTEND

public:
    // prevent constructor by default
    RemappingLayoutRawIndex& operator=(RemappingLayoutRawIndex const&);
    RemappingLayoutRawIndex(RemappingLayoutRawIndex const&);
    RemappingLayoutRawIndex();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<::DuplicateKey> generateIndicesOfDuplicates() const;

    MCAPI bool isKeymappingDefault(uint64 index) const;

    MCAPI void unassignDuplicateKeys(uint64 index);
    // NOLINTEND
};
#else // @header-generator platform
class RemappingLayoutRawIndex {};
#endif // @header-generator platform
#endif // @header-generator platform
