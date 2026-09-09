#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/db_helpers/Category.h"

// auto generated forward declare list
// clang-format off
class LevelStorage;
// clang-format on

class LevelStorageWriteBatch {
public:
    // LevelStorageWriteBatch inner types declare
    // clang-format off
    struct BatchEntry;
    class PerfContext;
    // clang-format on

    // LevelStorageWriteBatch inner types define
    struct BatchEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::shared_ptr<std::string>> mLatestValue;
        ::ll::TypedStorage<1, 1, bool>                          mDeleted;
        ::ll::TypedStorage<4, 4, ::DBHelpers::Category>         mCategory;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~BatchEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    class PerfContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong>        mOperation;
        ::ll::TypedStorage<8, 8, ulong>        mSize;
        ::ll::TypedStorage<8, 24, std::string> mKey;
        ::ll::TypedStorage<8, 8, char const*>  mReason;
        // NOLINTEND
    };

    using BatchContainerType = std::map<std::string, LevelStorageWriteBatch::BatchEntry>;

    using iterator = std::__map_iterator<std::__tree_iterator<
        std::__value_type<std::string, LevelStorageWriteBatch::BatchEntry>,
        std::__tree_node<std::__value_type<std::string, LevelStorageWriteBatch::BatchEntry>, void*>*,
        long>>;

    using const_iterator = std::__map_const_iterator<std::__tree_const_iterator<
        std::__value_type<std::string, LevelStorageWriteBatch::BatchEntry>,
        std::__tree_node<std::__value_type<std::string, LevelStorageWriteBatch::BatchEntry>, void*>*,
        long>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::function<void()>>>                        mFlushCallbacks;
    ::ll::TypedStorage<8, 24, std::map<std::string, LevelStorageWriteBatch::BatchEntry>> mBatch;
    ::ll::TypedStorage<4, 40, std::mutex>                                                mFlushCallbacksMutex;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelStorageWriteBatch& operator=(LevelStorageWriteBatch const&);
    LevelStorageWriteBatch(LevelStorageWriteBatch const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelStorageWriteBatch();

    virtual void putKey(std::string const&, std::shared_ptr<std::string>, ::DBHelpers::Category);

    virtual void putKey(std::string const&, std::string&&, ::DBHelpers::Category);

    virtual void putKey(std::string const&, std::string const&, ::DBHelpers::Category);

    virtual void putKey(std::string const&, std::string_view, ::DBHelpers::Category);

    virtual void deleteKey(std::string const&, ::DBHelpers::Category);

    virtual void flush(::LevelStorage&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _writeKey(std::string const&, std::shared_ptr<std::string>&&, ::DBHelpers::Category);

    MCNAPI void addFlushCallback(std::function<void()>);

    MCNAPI void clear();

    MCNAPI void erase(
        std::__map_const_iterator<std::__tree_const_iterator<
            std::__value_type<std::string, LevelStorageWriteBatch::BatchEntry>,
            std::__tree_node<std::__value_type<std::string, LevelStorageWriteBatch::BatchEntry>, void*>*,
            long>> const&
    );

    MCNAPI std::__map_const_iterator<std::__tree_const_iterator<
        std::__value_type<std::string, LevelStorageWriteBatch::BatchEntry>,
        std::__tree_node<std::__value_type<std::string, LevelStorageWriteBatch::BatchEntry>, void*>*,
        long>>
           find(std::string const&) const;

    MCNAPI std::__map_iterator<std::__tree_iterator<
        std::__value_type<std::string, LevelStorageWriteBatch::BatchEntry>,
        std::__tree_node<std::__value_type<std::string, LevelStorageWriteBatch::BatchEntry>, void*>*,
        long>>
           find(std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $putKey(std::string const&, std::shared_ptr<std::string>, ::DBHelpers::Category);

    MCNAPI void $putKey(std::string const&, std::string&&, ::DBHelpers::Category);

    MCNAPI void $putKey(std::string const&, std::string const&, ::DBHelpers::Category);

    MCNAPI void $putKey(std::string const&, std::string_view, ::DBHelpers::Category);

    MCNAPI void $deleteKey(std::string const&, ::DBHelpers::Category);

    MCNAPI void $flush(::LevelStorage&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
