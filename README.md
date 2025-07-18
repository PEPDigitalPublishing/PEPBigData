# PEPBigData
## 人教数据采集SDK

### 1.初始化，建议在AppDelegate中初始化
```
[PEPLoggingInstance setupWithConfiguration:nil appId:@"your appId" accessKey:"your appKey" writeFlag:true];
```

### 2.日志提交，普通模式
```
PEPLogData *data = [[PEPLogData alloc] init];
    data.productId = product_id;
    data.company = company;
    data.actionTitle = actionTitle;
    data.actionType = actionType;
    data.group = group;
    data.groupType = groupType;
    data.passiveObject = passiveObject;
    data.passiveType = passiveType;
    data.result = result;
    [[PEPLogPortManager shareInstance] onEventVersion4WithData_Now:data];
```

### 3.日志提交，适用于重要日志实时提交，仅限关键数据采集点使用
```
    PEPLogData *data = [[PEPLogData alloc] init];
    data.productId = product_id;
    data.company = company;
    data.actionTitle = actionTitle;
    data.actionType = actionType;
    data.group = group;
    data.groupType = groupType;
    data.passiveObject = passiveObject;
    data.passiveType = passiveType;
    data.fromPos = fromPos;
    [[PEPLogPortManager shareInstance] onEventVersion4WithData_Now:data];
```