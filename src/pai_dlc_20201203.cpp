// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/pai_dlc_20201203.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Pai-dlc20201203;

Alibabacloud_Pai-dlc20201203::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("pai-dlc"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Pai-dlc20201203::Client::getEndpoint(shared_ptr<string> productId,
                                                         shared_ptr<string> regionId,
                                                         shared_ptr<string> endpointRule,
                                                         shared_ptr<string> network,
                                                         shared_ptr<string> suffix,
                                                         shared_ptr<map<string, string>> endpointMap,
                                                         shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

CreateJobResponse Alibabacloud_Pai-dlc20201203::Client::createJob(shared_ptr<CreateJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createJobWithOptions(request, headers, runtime);
}

CreateJobResponse Alibabacloud_Pai-dlc20201203::Client::createJobWithOptions(shared_ptr<CreateJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<CreateJobRequestCodeSource>(request->codeSource)) {
    body->insert(pair<string, CreateJobRequestCodeSource>("CodeSource", *request->codeSource));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateJobRequestDataSources>>(request->dataSources)) {
    body->insert(pair<string, vector<CreateJobRequestDataSources>>("DataSources", *request->dataSources));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->debuggerConfigContent)) {
    body->insert(pair<string, string>("DebuggerConfigContent", *request->debuggerConfigContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    body->insert(pair<string, string>("DisplayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<JobElasticSpec>(request->elasticSpec)) {
    body->insert(pair<string, JobElasticSpec>("ElasticSpec", *request->elasticSpec));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->envs)) {
    body->insert(pair<string, map<string, string>>("Envs", *request->envs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->jobMaxRunningTimeMinutes)) {
    body->insert(pair<string, long>("JobMaxRunningTimeMinutes", *request->jobMaxRunningTimeMinutes));
  }
  if (!Darabonba_Util::Client::isUnset<vector<JobSpec>>(request->jobSpecs)) {
    body->insert(pair<string, vector<JobSpec>>("JobSpecs", *request->jobSpecs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobType)) {
    body->insert(pair<string, string>("JobType", *request->jobType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->options)) {
    body->insert(pair<string, string>("Options", *request->options));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    body->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    body->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<JobSettings>(request->settings)) {
    body->insert(pair<string, JobSettings>("Settings", *request->settings));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartyLibDir)) {
    body->insert(pair<string, string>("ThirdpartyLibDir", *request->thirdpartyLibDir));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->thirdpartyLibs)) {
    body->insert(pair<string, vector<string>>("ThirdpartyLibs", *request->thirdpartyLibs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userCommand)) {
    body->insert(pair<string, string>("UserCommand", *request->userCommand));
  }
  if (!Darabonba_Util::Client::isUnset<CreateJobRequestUserVpc>(request->userVpc)) {
    body->insert(pair<string, CreateJobRequestUserVpc>("UserVpc", *request->userVpc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateJob"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/jobs"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateJobResponse(callApi(params, req, runtime));
}

CreateTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::createTensorboard(shared_ptr<CreateTensorboardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createTensorboardWithOptions(request, headers, runtime);
}

CreateTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::createTensorboardWithOptions(shared_ptr<CreateTensorboardRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceId)) {
    body->insert(pair<string, string>("DataSourceId", *request->dataSourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    body->insert(pair<string, string>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DataSourceItem>>(request->dataSources)) {
    body->insert(pair<string, vector<DataSourceItem>>("DataSources", *request->dataSources));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    body->insert(pair<string, string>("DisplayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxRunningTimeMinutes)) {
    body->insert(pair<string, long>("MaxRunningTimeMinutes", *request->maxRunningTimeMinutes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->options)) {
    body->insert(pair<string, string>("Options", *request->options));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceId)) {
    body->insert(pair<string, string>("SourceId", *request->sourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    body->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->summaryPath)) {
    body->insert(pair<string, string>("SummaryPath", *request->summaryPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->summaryRelativePath)) {
    body->insert(pair<string, string>("SummaryRelativePath", *request->summaryRelativePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uri)) {
    body->insert(pair<string, string>("Uri", *request->uri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTensorboard"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/tensorboards"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTensorboardResponse(callApi(params, req, runtime));
}

DeleteJobResponse Alibabacloud_Pai-dlc20201203::Client::deleteJob(shared_ptr<string> JobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteJobWithOptions(JobId, headers, runtime);
}

DeleteJobResponse Alibabacloud_Pai-dlc20201203::Client::deleteJobWithOptions(shared_ptr<string> JobId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  JobId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(JobId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteJob"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/jobs/") + string(*JobId))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteJobResponse(callApi(params, req, runtime));
}

DeleteTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::deleteTensorboard(shared_ptr<string> TensorboardId, shared_ptr<DeleteTensorboardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteTensorboardWithOptions(TensorboardId, request, headers, runtime);
}

DeleteTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::deleteTensorboardWithOptions(shared_ptr<string> TensorboardId,
                                                                                             shared_ptr<DeleteTensorboardRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  TensorboardId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TensorboardId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTensorboard"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/tensorboards/") + string(*TensorboardId))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTensorboardResponse(callApi(params, req, runtime));
}

GetJobResponse Alibabacloud_Pai-dlc20201203::Client::getJob(shared_ptr<string> JobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getJobWithOptions(JobId, headers, runtime);
}

GetJobResponse Alibabacloud_Pai-dlc20201203::Client::getJobWithOptions(shared_ptr<string> JobId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  JobId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(JobId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetJob"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/jobs/") + string(*JobId))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetJobResponse(callApi(params, req, runtime));
}

GetJobEventsResponse Alibabacloud_Pai-dlc20201203::Client::getJobEvents(shared_ptr<string> JobId, shared_ptr<GetJobEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getJobEventsWithOptions(JobId, request, headers, runtime);
}

GetJobEventsResponse Alibabacloud_Pai-dlc20201203::Client::getJobEventsWithOptions(shared_ptr<string> JobId,
                                                                                   shared_ptr<GetJobEventsRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  JobId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(JobId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxEventsNum)) {
    query->insert(pair<string, long>("MaxEventsNum", *request->maxEventsNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetJobEvents"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/jobs/") + string(*JobId) + string("/events"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetJobEventsResponse(callApi(params, req, runtime));
}

GetJobMetricsResponse Alibabacloud_Pai-dlc20201203::Client::getJobMetrics(shared_ptr<string> JobId, shared_ptr<GetJobMetricsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getJobMetricsWithOptions(JobId, request, headers, runtime);
}

GetJobMetricsResponse Alibabacloud_Pai-dlc20201203::Client::getJobMetricsWithOptions(shared_ptr<string> JobId,
                                                                                     shared_ptr<GetJobMetricsRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  JobId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(JobId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricType)) {
    query->insert(pair<string, string>("MetricType", *request->metricType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeStep)) {
    query->insert(pair<string, string>("TimeStep", *request->timeStep));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetJobMetrics"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/jobs/") + string(*JobId) + string("/metrics"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetJobMetricsResponse(callApi(params, req, runtime));
}

GetPodEventsResponse Alibabacloud_Pai-dlc20201203::Client::getPodEvents(shared_ptr<string> JobId, shared_ptr<string> PodId, shared_ptr<GetPodEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPodEventsWithOptions(JobId, PodId, request, headers, runtime);
}

GetPodEventsResponse Alibabacloud_Pai-dlc20201203::Client::getPodEventsWithOptions(shared_ptr<string> JobId,
                                                                                   shared_ptr<string> PodId,
                                                                                   shared_ptr<GetPodEventsRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  JobId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(JobId));
  PodId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(PodId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxEventsNum)) {
    query->insert(pair<string, long>("MaxEventsNum", *request->maxEventsNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->podUid)) {
    query->insert(pair<string, string>("PodUid", *request->podUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPodEvents"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/jobs/") + string(*JobId) + string("/pods/") + string(*PodId) + string("/events"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPodEventsResponse(callApi(params, req, runtime));
}

GetPodLogsResponse Alibabacloud_Pai-dlc20201203::Client::getPodLogs(shared_ptr<string> JobId, shared_ptr<string> PodId, shared_ptr<GetPodLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPodLogsWithOptions(JobId, PodId, request, headers, runtime);
}

GetPodLogsResponse Alibabacloud_Pai-dlc20201203::Client::getPodLogsWithOptions(shared_ptr<string> JobId,
                                                                               shared_ptr<string> PodId,
                                                                               shared_ptr<GetPodLogsRequest> request,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  JobId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(JobId));
  PodId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(PodId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->downloadToFile)) {
    query->insert(pair<string, bool>("DownloadToFile", *request->downloadToFile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxLines)) {
    query->insert(pair<string, long>("MaxLines", *request->maxLines));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->podUid)) {
    query->insert(pair<string, string>("PodUid", *request->podUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPodLogs"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/jobs/") + string(*JobId) + string("/pods/") + string(*PodId) + string("/logs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPodLogsResponse(callApi(params, req, runtime));
}

GetTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::getTensorboard(shared_ptr<string> TensorboardId, shared_ptr<GetTensorboardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTensorboardWithOptions(TensorboardId, request, headers, runtime);
}

GetTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::getTensorboardWithOptions(shared_ptr<string> TensorboardId,
                                                                                       shared_ptr<GetTensorboardRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  TensorboardId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TensorboardId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jodId)) {
    query->insert(pair<string, string>("JodId", *request->jodId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTensorboard"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/tensorboards/") + string(*TensorboardId))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTensorboardResponse(callApi(params, req, runtime));
}

ListEcsSpecsResponse Alibabacloud_Pai-dlc20201203::Client::listEcsSpecs(shared_ptr<ListEcsSpecsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listEcsSpecsWithOptions(request, headers, runtime);
}

ListEcsSpecsResponse Alibabacloud_Pai-dlc20201203::Client::listEcsSpecsWithOptions(shared_ptr<ListEcsSpecsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorType)) {
    query->insert(pair<string, string>("AcceleratorType", *request->acceleratorType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEcsSpecs"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/ecsspecs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEcsSpecsResponse(callApi(params, req, runtime));
}

ListJobsResponse Alibabacloud_Pai-dlc20201203::Client::listJobs(shared_ptr<ListJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listJobsWithOptions(request, headers, runtime);
}

ListJobsResponse Alibabacloud_Pai-dlc20201203::Client::listJobsWithOptions(shared_ptr<ListJobsRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListJobsShrinkRequest> request = make_shared<ListJobsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessUserId)) {
    query->insert(pair<string, string>("BusinessUserId", *request->businessUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->caller)) {
    query->insert(pair<string, string>("Caller", *request->caller));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    query->insert(pair<string, string>("DisplayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->fromAllWorkspaces)) {
    query->insert(pair<string, bool>("FromAllWorkspaces", *request->fromAllWorkspaces));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobType)) {
    query->insert(pair<string, string>("JobType", *request->jobType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineId)) {
    query->insert(pair<string, string>("PipelineId", *request->pipelineId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showOwn)) {
    query->insert(pair<string, bool>("ShowOwn", *request->showOwn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListJobs"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/jobs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListJobsResponse(callApi(params, req, runtime));
}

ListTensorboardsResponse Alibabacloud_Pai-dlc20201203::Client::listTensorboards(shared_ptr<ListTensorboardsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTensorboardsWithOptions(request, headers, runtime);
}

ListTensorboardsResponse Alibabacloud_Pai-dlc20201203::Client::listTensorboardsWithOptions(shared_ptr<ListTensorboardsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    query->insert(pair<string, string>("DisplayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceId)) {
    query->insert(pair<string, string>("SourceId", *request->sourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tensorboardId)) {
    query->insert(pair<string, string>("TensorboardId", *request->tensorboardId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->verbose)) {
    query->insert(pair<string, bool>("Verbose", *request->verbose));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTensorboards"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/tensorboards"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTensorboardsResponse(callApi(params, req, runtime));
}

StartTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::startTensorboard(shared_ptr<string> TensorboardId, shared_ptr<StartTensorboardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startTensorboardWithOptions(TensorboardId, request, headers, runtime);
}

StartTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::startTensorboardWithOptions(shared_ptr<string> TensorboardId,
                                                                                           shared_ptr<StartTensorboardRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  TensorboardId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TensorboardId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartTensorboard"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/tensorboards/") + string(*TensorboardId) + string("/start"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartTensorboardResponse(callApi(params, req, runtime));
}

StopJobResponse Alibabacloud_Pai-dlc20201203::Client::stopJob(shared_ptr<string> JobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopJobWithOptions(JobId, headers, runtime);
}

StopJobResponse Alibabacloud_Pai-dlc20201203::Client::stopJobWithOptions(shared_ptr<string> JobId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  JobId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(JobId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopJob"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/jobs/") + string(*JobId) + string("/stop"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopJobResponse(callApi(params, req, runtime));
}

StopTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::stopTensorboard(shared_ptr<string> TensorboardId, shared_ptr<StopTensorboardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopTensorboardWithOptions(TensorboardId, request, headers, runtime);
}

StopTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::stopTensorboardWithOptions(shared_ptr<string> TensorboardId,
                                                                                         shared_ptr<StopTensorboardRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  TensorboardId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TensorboardId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopTensorboard"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/tensorboards/") + string(*TensorboardId) + string("/stop"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopTensorboardResponse(callApi(params, req, runtime));
}

UpdateJobResponse Alibabacloud_Pai-dlc20201203::Client::updateJob(shared_ptr<string> JobId, shared_ptr<UpdateJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateJobWithOptions(JobId, request, headers, runtime);
}

UpdateJobResponse Alibabacloud_Pai-dlc20201203::Client::updateJobWithOptions(shared_ptr<string> JobId,
                                                                             shared_ptr<UpdateJobRequest> request,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  JobId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(JobId));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    body->insert(pair<string, long>("Priority", *request->priority));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateJob"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/jobs/") + string(*JobId))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateJobResponse(callApi(params, req, runtime));
}

UpdateTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::updateTensorboard(shared_ptr<string> TensorboardId, shared_ptr<UpdateTensorboardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateTensorboardWithOptions(TensorboardId, request, headers, runtime);
}

UpdateTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::updateTensorboardWithOptions(shared_ptr<string> TensorboardId,
                                                                                             shared_ptr<UpdateTensorboardRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  TensorboardId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TensorboardId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxRunningTimeMinutes)) {
    query->insert(pair<string, long>("MaxRunningTimeMinutes", *request->maxRunningTimeMinutes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTensorboard"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/tensorboards/") + string(*TensorboardId))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTensorboardResponse(callApi(params, req, runtime));
}

