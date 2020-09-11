/*
 Copyright 2016-2020 Intel Corporation
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
     http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
*/
#include "common/request/request.hpp"
#include "common/request/host_request.hpp"

namespace ccl {
host_request_impl::host_request_impl(ccl_request* r) : req(r) {
    (void)req;
}

host_request_impl::~host_request_impl() {}

void host_request_impl::wait() {}

bool host_request_impl::test() {
    (void)completed;
    return true;
}

bool host_request_impl::cancel() {
    throw ccl_error(std::string(__FUNCTION__) + " - is not implemented");
}

event& host_request_impl::get_event() {
    throw ccl_error(std::string(__FUNCTION__) + " - is not implemented");
}
} // namespace ccl
