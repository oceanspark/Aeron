/*
 * Copyright 2014 - 2017 Real Logic Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef AERON_AERON_DRIVER_COMMON_H
#define AERON_AERON_DRIVER_COMMON_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

typedef struct aeron_driver_managed_resource_stct
{
    int64_t registration_id;
    int64_t time_of_last_status_change;
    int32_t refcnt;
}
aeron_driver_managed_resource_t;

typedef struct aeron_position_stct
{
    int64_t *value_addr;
    int64_t counter_id;
}
aeron_position_t;

typedef struct aeron_subscribeable_stct
{
    aeron_position_t *array;
    size_t length;
    size_t capacity;
}
aeron_subscribeable_t;

#endif //AERON_AERON_DRIVER_COMMON_H
