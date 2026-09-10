from pathlib import Path
import argparse,hashlib,json,re,statistics
parser=argparse.ArgumentParser(description='Verify P6 device transcripts and matched RSS observations.')
parser.add_argument('--evidence',type=Path,required=True)
root=parser.parse_args().evidence.resolve()
def read(path):return json.loads(path.read_text(encoding='utf-8-sig'))
def check(value,message):
    if not value:raise RuntimeError(message)
accepted=[]
for index in range(1,11):
    name='final-'+str(index).zfill(2)
    item=read(root/(name+'-result.json'))
    raw=(root/(name+'-final.log')).read_bytes()
    text=(root/(name+'-final.log')).read_text(encoding='utf-8-sig')
    check(item['passed'] and item['normal_close'] and item['kernel_enabled'],name+' has an incomplete result')
    check(hashlib.sha256(text.encode()).hexdigest()==item['final_log_sha256'],name+' transcript hash changed')
    check(not (root/(name+'-crash.log')).read_text().strip(),name+' has crash output')
    markers=['LeviLamina: Loaded','LeviLamina: Enabled','LeviLamina Mod LeviLaminaP6Example: load ok',
             'LeviLamina Mod LeviLaminaP6Example: enable ok','LeviLamina Mod LeviLaminaP6Example: disable ok',
             'LeviLamina Mod LeviLaminaP6Example: unload ok','LeviLamina Mod LeviLaminaP6Example: dlclose ok',
             'LeviLamina: Unloaded','LeviLamina: context cleared']
    locations=[]
    for marker in markers:
        found=[n for n,line in enumerate(text.splitlines()) if line.rstrip().endswith(marker)]
        check(len(found)==1,name+' did not record exactly one '+marker)
        locations.append(found[0])
    check(locations==sorted(locations),name+' lifecycle order differs')
    check('first ActorNormalTickAfter' in text and 'first non-null ClientInstanceLocalPlayerAfter' in text,name+' has missing events')
    match=re.search(r'LeviLamina: final actor=(\d+) client=(\d+) nonNullPlayer=(\d+) childHandles=0 listeners=0 callbacks=0 snapshots=0; guarded retirement=ok',text)
    check(match and min(map(int,match.groups()))>0,name+' invalid final counters')
    check(text.count('PL guarded summary query=ok bindings=0 inFlight=0 resident=2')==1,name+' invalid PL state')
    row={'round':index,'pid':item['pid'],'actor':int(match[1]),'client':int(match[2]),'non_null_player':int(match[3]),
         'normal_close':True,'context_cleared':True,'bindings':0,'listeners':0,'callbacks':0,'child_handles':0,
         'resident_gateways':2,'log_sha256':hashlib.sha256(raw).hexdigest(),'profiled':item['profiled']}
    if item.get('background_resume_observed'):row['background_resume_observed']=True
    if item['rss']:
        row['rss_kib']={'first':item['rss'][0]['VmRSS'],'peak':max(x['VmRSS'] for x in item['rss']),
                        'stable_median':statistics.median(x['VmRSS'] for x in item['rss'][-5:])}
        row['cpu_seconds']=(item['rss'][-1]['cpu_ticks']-item['rss'][0]['cpu_ticks'])/100
    accepted.append(row)
check(len({x['pid'] for x in accepted})==10,'PID reused across accepted cycles')
controls=[]
for index in [1,2]:
    item=read(root/('baseline-'+str(index)+'-result.json'))
    check(item['passed'] and not item['kernel_enabled'] and item['normal_close'],'invalid RSS control')
    controls.append({'pid':item['pid'],'first_rss_kib':item['rss'][0]['VmRSS'],
                     'peak_rss_kib':max(x['VmRSS'] for x in item['rss']),
                     'stable_rss_kib':statistics.median(x['VmRSS'] for x in item['rss'][-5:])})
matched=[x for x in accepted if 'rss_kib' in x and not x['profiled']]
control_mean=statistics.mean(x['stable_rss_kib'] for x in controls)
treatment_mean=statistics.mean(x['rss_kib']['stable_median'] for x in matched)
report={'ten_cycles_passed':True,'accepted':accepted,'rss_controls':controls,'rss_matched_rounds':[x['round'] for x in matched],
        'rss_plan':{'warmup_seconds':10,'measurement_seconds':20,'interval_seconds':2,'same_world':True,'same_apk_provider':True},
        'control_stable_mean_kib':control_mean,'treatment_stable_mean_kib':treatment_mean,
        'observed_mean_delta_kib':treatment_mean-control_mean,
        'memory_claim':'Observed process RSS comparison; game variation is not attributed solely to the kernel and does not prove absence of all leaks.'}
(root/'rounds-verified.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
print('Ten distinct complete lifecycle cycles verified; RSS matched controls summarized.')
